# 依赖第三方库
git clone git@gitlab.vmic.xyz:iai_common/libfastcommon.git

# 使用方法
声明cache对象，并初始化
```
objectcache::ObjectCache *object_cache = SingletonObject<objectcache::ObjectCache>::GetInstance();
object_cache->InitCache("libshmcache.conf");
```
# 接口说明
Set
```
//----------------------------------------------
parameters:
key: the key
value: the value
ttl: expored time(s)
return error no, 0 for success, != 0 for fail
//----------------------------------------------
template <typename objKeyType, typename objValueType>
int set(const objKeyType& key, const objValueType& value, long ttl)
```
Get
```
//----------------------------------------------
parameters:
key: the key
value: store the returned value
return error no, 0 for success, != 0 for fail
//----------------------------------------------
template <typename objKeyType, typename objValueType>
int get(const objKeyType& key, const objValueType& value)
```