#include <string.h>
#include <iostream>
#include "logger.h"
#include "recommend.pb.h"
#include "single_object.h"
#include "objectcache.h"
using namespace std;

int main(int argc, char *argv[])
{
    log_init();
    //g_log_context.log_level = LOG_INFO;
    
    objectcache::ObjectCache *object_cache = SingletonObject<objectcache::ObjectCache>::GetInstance();
    object_cache->InitCache("libshmcache.conf");

    so_rtrs::RecomRequest req;
    req.set_appkey("key");
    so_rtrs::RecomResponse rsp;
    rsp.set_retstr("example");

    int ret = object_cache->set(req, rsp, 1);
    std::cout << ret;
    //ret: 0 存在，且未过期
    so_rtrs::RecomResponse rsp_1;
    ret = object_cache->get(req, &rsp_1);
    std::cout << "get result:" << ret << ";value:" << rsp_1.retstr() <<endl;
    
    sleep(2);
    so_rtrs::RecomResponse rsp_2;
    ret = object_cache->get(req, &rsp_2);
    //ret:110 代表过期
    std::cout << "get result:" << ret << ";value:" << rsp_2.retstr() <<endl;
    
    so_rtrs::RecomResponse rsp_3;
    req.set_appkey("key1");
    ret = object_cache->get(req, &rsp_3);
    //ret:2 代表key不存在
    std::cout << "get result:" << ret << ";value:" << rsp_3.retstr() <<endl;

	return 0;
}

