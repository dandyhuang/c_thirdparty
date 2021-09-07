#ifndef _OBJECT_SHM_H
#define _OBJECT_SHM_H

#include <string>
#include "thirdparty/libshmcache/include/shm_hashtable.h"
#include "thirdparty/libshmcache/include/shmcache.h"

extern "C"{
    int log_init();
}
namespace objectcache
{
class ObjectCache
{
public:
    ObjectCache(){};
    int InitCache(std::string ini_cfg){
        log_init();
        init_status_ = shmcache_init_from_file(&ctx_, ini_cfg.c_str());
        return init_status_;
    };
    
    template <typename objKeyType, typename objValueType>
    int set(const objKeyType& key, const objValueType& value, long ttl) {
        if(init_status_ != 0){
            return init_status_;
        }
        std::string sk;
        key.SerializeToString(&sk);

        std::string sv;
        value.SerializeToString(&sv);
        
        struct shmcache_hash_entry entries;
        entries.key.length = sk.length();
        entries.key.data = const_cast<char*>(sk.c_str());

        entries.value.data = const_cast<char*>(sv.c_str());
        entries.value.length = sv.length();
        entries.value.options = SHMCACHE_SERIALIZER_STRING;
        time_t current_time = time(NULL);
        entries.value.expires = current_time + ttl;

        int ret = shmcache_set_ex(&ctx_, &entries.key, &entries.value);
        return ret;
    }

    int set(const std::string& key, const std::string& value, long ttl) {
        if(init_status_ != 0){
            return init_status_;
        }

        struct shmcache_hash_entry entries;
        entries.key.length = key.length();
        entries.key.data = const_cast<char*>(key.c_str());
 
        entries.value.data = const_cast<char*>(value.c_str());
        entries.value.length = value.length();
        entries.value.options = SHMCACHE_SERIALIZER_STRING;
        time_t current_time = time(NULL);
        entries.value.expires = current_time + ttl;
 
        int ret = shmcache_set_ex(&ctx_, &entries.key, &entries.value);
        return ret;
    }

    template <typename objKeyType, typename objValueType>
    int get(const objKeyType& key, objValueType* value) {
        if(init_status_ != 0){
            return init_status_;
        }

        std::string sk;
        key.SerializeToString(&sk);
        
        struct shmcache_hash_entry entries;
        entries.key.length = sk.length();
        entries.key.data = const_cast<char*>(sk.c_str());

        int ret = shmcache_get(&ctx_, &entries.key, &entries.value);
        if(ret != 0){
            return ret;
        }
        std::string str(entries.value.data, entries.value.length);
        value->ParseFromString(std::move(str));
        return ret;
    }

    int get(const std::string& key, std::string& value) {
        if(init_status_ != 0){
            return init_status_;
        }
        
        struct shmcache_hash_entry entries;
        entries.key.length = key.length();
        entries.key.data = const_cast<char*>(key.c_str());
 
        int ret = shmcache_get(&ctx_, &entries.key, &entries.value);
        if(ret != 0){
            return ret;
        }
        std::string str(entries.value.data, entries.value.length);
        value = str;
        return ret;
    }

public:
    struct shmcache_context ctx_;
    int init_status_;
};

}

#endif
