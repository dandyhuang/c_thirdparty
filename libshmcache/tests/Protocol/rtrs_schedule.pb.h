// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rtrs_schedule.proto

#ifndef PROTOBUF_INCLUDED_rtrs_5fschedule_2eproto
#define PROTOBUF_INCLUDED_rtrs_5fschedule_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_rtrs_5fschedule_2eproto 

namespace protobuf_rtrs_5fschedule_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
}  // namespace protobuf_rtrs_5fschedule_2eproto
namespace so_rtrs {
namespace schedule {
class ParamKV;
class ParamKVDefaultTypeInternal;
extern ParamKVDefaultTypeInternal _ParamKV_default_instance_;
class Request;
class RequestDefaultTypeInternal;
extern RequestDefaultTypeInternal _Request_default_instance_;
class Response;
class ResponseDefaultTypeInternal;
extern ResponseDefaultTypeInternal _Response_default_instance_;
}  // namespace schedule
}  // namespace so_rtrs
namespace google {
namespace protobuf {
template<> ::so_rtrs::schedule::ParamKV* Arena::CreateMaybeMessage<::so_rtrs::schedule::ParamKV>(Arena*);
template<> ::so_rtrs::schedule::Request* Arena::CreateMaybeMessage<::so_rtrs::schedule::Request>(Arena*);
template<> ::so_rtrs::schedule::Response* Arena::CreateMaybeMessage<::so_rtrs::schedule::Response>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace so_rtrs {
namespace schedule {

// ===================================================================

class ParamKV : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:so_rtrs.schedule.ParamKV) */ {
 public:
  ParamKV();
  virtual ~ParamKV();

  ParamKV(const ParamKV& from);

  inline ParamKV& operator=(const ParamKV& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ParamKV(ParamKV&& from) noexcept
    : ParamKV() {
    *this = ::std::move(from);
  }

  inline ParamKV& operator=(ParamKV&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ParamKV& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ParamKV* internal_default_instance() {
    return reinterpret_cast<const ParamKV*>(
               &_ParamKV_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ParamKV* other);
  friend void swap(ParamKV& a, ParamKV& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ParamKV* New() const final {
    return CreateMaybeMessage<ParamKV>(NULL);
  }

  ParamKV* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ParamKV>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    final;
  void CopyFrom(const ParamKV& from);
  void MergeFrom(const ParamKV& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ParamKV* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string key = 1;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  #if LANG_CXX11
  void set_key(::std::string&& value);
  #endif
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // string val = 2;
  void clear_val();
  static const int kValFieldNumber = 2;
  const ::std::string& val() const;
  void set_val(const ::std::string& value);
  #if LANG_CXX11
  void set_val(::std::string&& value);
  #endif
  void set_val(const char* value);
  void set_val(const char* value, size_t size);
  ::std::string* mutable_val();
  ::std::string* release_val();
  void set_allocated_val(::std::string* val);

  // @@protoc_insertion_point(class_scope:so_rtrs.schedule.ParamKV)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::google::protobuf::internal::ArenaStringPtr val_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_rtrs_5fschedule_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Request : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:so_rtrs.schedule.Request) */ {
 public:
  Request();
  virtual ~Request();

  Request(const Request& from);

  inline Request& operator=(const Request& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Request(Request&& from) noexcept
    : Request() {
    *this = ::std::move(from);
  }

  inline Request& operator=(Request&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const Request& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Request* internal_default_instance() {
    return reinterpret_cast<const Request*>(
               &_Request_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Request* other);
  friend void swap(Request& a, Request& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Request* New() const final {
    return CreateMaybeMessage<Request>(NULL);
  }

  Request* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Request>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    final;
  void CopyFrom(const Request& from);
  void MergeFrom(const Request& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Request* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .so_rtrs.schedule.ParamKV query = 2;
  int query_size() const;
  void clear_query();
  static const int kQueryFieldNumber = 2;
  ::so_rtrs::schedule::ParamKV* mutable_query(int index);
  ::google::protobuf::RepeatedPtrField< ::so_rtrs::schedule::ParamKV >*
      mutable_query();
  const ::so_rtrs::schedule::ParamKV& query(int index) const;
  ::so_rtrs::schedule::ParamKV* add_query();
  const ::google::protobuf::RepeatedPtrField< ::so_rtrs::schedule::ParamKV >&
      query() const;

  // repeated .so_rtrs.schedule.ParamKV header = 3;
  int header_size() const;
  void clear_header();
  static const int kHeaderFieldNumber = 3;
  ::so_rtrs::schedule::ParamKV* mutable_header(int index);
  ::google::protobuf::RepeatedPtrField< ::so_rtrs::schedule::ParamKV >*
      mutable_header();
  const ::so_rtrs::schedule::ParamKV& header(int index) const;
  ::so_rtrs::schedule::ParamKV* add_header();
  const ::google::protobuf::RepeatedPtrField< ::so_rtrs::schedule::ParamKV >&
      header() const;

  // repeated .so_rtrs.schedule.ParamKV cookie = 4;
  int cookie_size() const;
  void clear_cookie();
  static const int kCookieFieldNumber = 4;
  ::so_rtrs::schedule::ParamKV* mutable_cookie(int index);
  ::google::protobuf::RepeatedPtrField< ::so_rtrs::schedule::ParamKV >*
      mutable_cookie();
  const ::so_rtrs::schedule::ParamKV& cookie(int index) const;
  ::so_rtrs::schedule::ParamKV* add_cookie();
  const ::google::protobuf::RepeatedPtrField< ::so_rtrs::schedule::ParamKV >&
      cookie() const;

  // string uri = 1;
  void clear_uri();
  static const int kUriFieldNumber = 1;
  const ::std::string& uri() const;
  void set_uri(const ::std::string& value);
  #if LANG_CXX11
  void set_uri(::std::string&& value);
  #endif
  void set_uri(const char* value);
  void set_uri(const char* value, size_t size);
  ::std::string* mutable_uri();
  ::std::string* release_uri();
  void set_allocated_uri(::std::string* uri);

  // bytes body = 5;
  void clear_body();
  static const int kBodyFieldNumber = 5;
  const ::std::string& body() const;
  void set_body(const ::std::string& value);
  #if LANG_CXX11
  void set_body(::std::string&& value);
  #endif
  void set_body(const char* value);
  void set_body(const void* value, size_t size);
  ::std::string* mutable_body();
  ::std::string* release_body();
  void set_allocated_body(::std::string* body);

  // @@protoc_insertion_point(class_scope:so_rtrs.schedule.Request)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::so_rtrs::schedule::ParamKV > query_;
  ::google::protobuf::RepeatedPtrField< ::so_rtrs::schedule::ParamKV > header_;
  ::google::protobuf::RepeatedPtrField< ::so_rtrs::schedule::ParamKV > cookie_;
  ::google::protobuf::internal::ArenaStringPtr uri_;
  ::google::protobuf::internal::ArenaStringPtr body_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_rtrs_5fschedule_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Response : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:so_rtrs.schedule.Response) */ {
 public:
  Response();
  virtual ~Response();

  Response(const Response& from);

  inline Response& operator=(const Response& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Response(Response&& from) noexcept
    : Response() {
    *this = ::std::move(from);
  }

  inline Response& operator=(Response&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const Response& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Response* internal_default_instance() {
    return reinterpret_cast<const Response*>(
               &_Response_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(Response* other);
  friend void swap(Response& a, Response& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Response* New() const final {
    return CreateMaybeMessage<Response>(NULL);
  }

  Response* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Response>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    final;
  void CopyFrom(const Response& from);
  void MergeFrom(const Response& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Response* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .so_rtrs.schedule.ParamKV header = 2;
  int header_size() const;
  void clear_header();
  static const int kHeaderFieldNumber = 2;
  ::so_rtrs::schedule::ParamKV* mutable_header(int index);
  ::google::protobuf::RepeatedPtrField< ::so_rtrs::schedule::ParamKV >*
      mutable_header();
  const ::so_rtrs::schedule::ParamKV& header(int index) const;
  ::so_rtrs::schedule::ParamKV* add_header();
  const ::google::protobuf::RepeatedPtrField< ::so_rtrs::schedule::ParamKV >&
      header() const;

  // string mime = 1;
  void clear_mime();
  static const int kMimeFieldNumber = 1;
  const ::std::string& mime() const;
  void set_mime(const ::std::string& value);
  #if LANG_CXX11
  void set_mime(::std::string&& value);
  #endif
  void set_mime(const char* value);
  void set_mime(const char* value, size_t size);
  ::std::string* mutable_mime();
  ::std::string* release_mime();
  void set_allocated_mime(::std::string* mime);

  // bytes body = 4;
  void clear_body();
  static const int kBodyFieldNumber = 4;
  const ::std::string& body() const;
  void set_body(const ::std::string& value);
  #if LANG_CXX11
  void set_body(::std::string&& value);
  #endif
  void set_body(const char* value);
  void set_body(const void* value, size_t size);
  ::std::string* mutable_body();
  ::std::string* release_body();
  void set_allocated_body(::std::string* body);

  // fixed32 code = 3;
  void clear_code();
  static const int kCodeFieldNumber = 3;
  ::google::protobuf::uint32 code() const;
  void set_code(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:so_rtrs.schedule.Response)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::so_rtrs::schedule::ParamKV > header_;
  ::google::protobuf::internal::ArenaStringPtr mime_;
  ::google::protobuf::internal::ArenaStringPtr body_;
  ::google::protobuf::uint32 code_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_rtrs_5fschedule_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ParamKV

// string key = 1;
inline void ParamKV::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ParamKV::key() const {
  // @@protoc_insertion_point(field_get:so_rtrs.schedule.ParamKV.key)
  return key_.GetNoArena();
}
inline void ParamKV::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:so_rtrs.schedule.ParamKV.key)
}
#if LANG_CXX11
inline void ParamKV::set_key(::std::string&& value) {
  
  key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:so_rtrs.schedule.ParamKV.key)
}
#endif
inline void ParamKV::set_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:so_rtrs.schedule.ParamKV.key)
}
inline void ParamKV::set_key(const char* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:so_rtrs.schedule.ParamKV.key)
}
inline ::std::string* ParamKV::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:so_rtrs.schedule.ParamKV.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ParamKV::release_key() {
  // @@protoc_insertion_point(field_release:so_rtrs.schedule.ParamKV.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ParamKV::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:so_rtrs.schedule.ParamKV.key)
}

// string val = 2;
inline void ParamKV::clear_val() {
  val_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ParamKV::val() const {
  // @@protoc_insertion_point(field_get:so_rtrs.schedule.ParamKV.val)
  return val_.GetNoArena();
}
inline void ParamKV::set_val(const ::std::string& value) {
  
  val_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:so_rtrs.schedule.ParamKV.val)
}
#if LANG_CXX11
inline void ParamKV::set_val(::std::string&& value) {
  
  val_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:so_rtrs.schedule.ParamKV.val)
}
#endif
inline void ParamKV::set_val(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  val_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:so_rtrs.schedule.ParamKV.val)
}
inline void ParamKV::set_val(const char* value, size_t size) {
  
  val_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:so_rtrs.schedule.ParamKV.val)
}
inline ::std::string* ParamKV::mutable_val() {
  
  // @@protoc_insertion_point(field_mutable:so_rtrs.schedule.ParamKV.val)
  return val_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ParamKV::release_val() {
  // @@protoc_insertion_point(field_release:so_rtrs.schedule.ParamKV.val)
  
  return val_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ParamKV::set_allocated_val(::std::string* val) {
  if (val != NULL) {
    
  } else {
    
  }
  val_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), val);
  // @@protoc_insertion_point(field_set_allocated:so_rtrs.schedule.ParamKV.val)
}

// -------------------------------------------------------------------

// Request

// string uri = 1;
inline void Request::clear_uri() {
  uri_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Request::uri() const {
  // @@protoc_insertion_point(field_get:so_rtrs.schedule.Request.uri)
  return uri_.GetNoArena();
}
inline void Request::set_uri(const ::std::string& value) {
  
  uri_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:so_rtrs.schedule.Request.uri)
}
#if LANG_CXX11
inline void Request::set_uri(::std::string&& value) {
  
  uri_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:so_rtrs.schedule.Request.uri)
}
#endif
inline void Request::set_uri(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  uri_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:so_rtrs.schedule.Request.uri)
}
inline void Request::set_uri(const char* value, size_t size) {
  
  uri_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:so_rtrs.schedule.Request.uri)
}
inline ::std::string* Request::mutable_uri() {
  
  // @@protoc_insertion_point(field_mutable:so_rtrs.schedule.Request.uri)
  return uri_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Request::release_uri() {
  // @@protoc_insertion_point(field_release:so_rtrs.schedule.Request.uri)
  
  return uri_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_allocated_uri(::std::string* uri) {
  if (uri != NULL) {
    
  } else {
    
  }
  uri_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uri);
  // @@protoc_insertion_point(field_set_allocated:so_rtrs.schedule.Request.uri)
}

// repeated .so_rtrs.schedule.ParamKV query = 2;
inline int Request::query_size() const {
  return query_.size();
}
inline void Request::clear_query() {
  query_.Clear();
}
inline ::so_rtrs::schedule::ParamKV* Request::mutable_query(int index) {
  // @@protoc_insertion_point(field_mutable:so_rtrs.schedule.Request.query)
  return query_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::so_rtrs::schedule::ParamKV >*
Request::mutable_query() {
  // @@protoc_insertion_point(field_mutable_list:so_rtrs.schedule.Request.query)
  return &query_;
}
inline const ::so_rtrs::schedule::ParamKV& Request::query(int index) const {
  // @@protoc_insertion_point(field_get:so_rtrs.schedule.Request.query)
  return query_.Get(index);
}
inline ::so_rtrs::schedule::ParamKV* Request::add_query() {
  // @@protoc_insertion_point(field_add:so_rtrs.schedule.Request.query)
  return query_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::so_rtrs::schedule::ParamKV >&
Request::query() const {
  // @@protoc_insertion_point(field_list:so_rtrs.schedule.Request.query)
  return query_;
}

// repeated .so_rtrs.schedule.ParamKV header = 3;
inline int Request::header_size() const {
  return header_.size();
}
inline void Request::clear_header() {
  header_.Clear();
}
inline ::so_rtrs::schedule::ParamKV* Request::mutable_header(int index) {
  // @@protoc_insertion_point(field_mutable:so_rtrs.schedule.Request.header)
  return header_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::so_rtrs::schedule::ParamKV >*
Request::mutable_header() {
  // @@protoc_insertion_point(field_mutable_list:so_rtrs.schedule.Request.header)
  return &header_;
}
inline const ::so_rtrs::schedule::ParamKV& Request::header(int index) const {
  // @@protoc_insertion_point(field_get:so_rtrs.schedule.Request.header)
  return header_.Get(index);
}
inline ::so_rtrs::schedule::ParamKV* Request::add_header() {
  // @@protoc_insertion_point(field_add:so_rtrs.schedule.Request.header)
  return header_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::so_rtrs::schedule::ParamKV >&
Request::header() const {
  // @@protoc_insertion_point(field_list:so_rtrs.schedule.Request.header)
  return header_;
}

// repeated .so_rtrs.schedule.ParamKV cookie = 4;
inline int Request::cookie_size() const {
  return cookie_.size();
}
inline void Request::clear_cookie() {
  cookie_.Clear();
}
inline ::so_rtrs::schedule::ParamKV* Request::mutable_cookie(int index) {
  // @@protoc_insertion_point(field_mutable:so_rtrs.schedule.Request.cookie)
  return cookie_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::so_rtrs::schedule::ParamKV >*
Request::mutable_cookie() {
  // @@protoc_insertion_point(field_mutable_list:so_rtrs.schedule.Request.cookie)
  return &cookie_;
}
inline const ::so_rtrs::schedule::ParamKV& Request::cookie(int index) const {
  // @@protoc_insertion_point(field_get:so_rtrs.schedule.Request.cookie)
  return cookie_.Get(index);
}
inline ::so_rtrs::schedule::ParamKV* Request::add_cookie() {
  // @@protoc_insertion_point(field_add:so_rtrs.schedule.Request.cookie)
  return cookie_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::so_rtrs::schedule::ParamKV >&
Request::cookie() const {
  // @@protoc_insertion_point(field_list:so_rtrs.schedule.Request.cookie)
  return cookie_;
}

// bytes body = 5;
inline void Request::clear_body() {
  body_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Request::body() const {
  // @@protoc_insertion_point(field_get:so_rtrs.schedule.Request.body)
  return body_.GetNoArena();
}
inline void Request::set_body(const ::std::string& value) {
  
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:so_rtrs.schedule.Request.body)
}
#if LANG_CXX11
inline void Request::set_body(::std::string&& value) {
  
  body_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:so_rtrs.schedule.Request.body)
}
#endif
inline void Request::set_body(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:so_rtrs.schedule.Request.body)
}
inline void Request::set_body(const void* value, size_t size) {
  
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:so_rtrs.schedule.Request.body)
}
inline ::std::string* Request::mutable_body() {
  
  // @@protoc_insertion_point(field_mutable:so_rtrs.schedule.Request.body)
  return body_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Request::release_body() {
  // @@protoc_insertion_point(field_release:so_rtrs.schedule.Request.body)
  
  return body_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_allocated_body(::std::string* body) {
  if (body != NULL) {
    
  } else {
    
  }
  body_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), body);
  // @@protoc_insertion_point(field_set_allocated:so_rtrs.schedule.Request.body)
}

// -------------------------------------------------------------------

// Response

// string mime = 1;
inline void Response::clear_mime() {
  mime_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Response::mime() const {
  // @@protoc_insertion_point(field_get:so_rtrs.schedule.Response.mime)
  return mime_.GetNoArena();
}
inline void Response::set_mime(const ::std::string& value) {
  
  mime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:so_rtrs.schedule.Response.mime)
}
#if LANG_CXX11
inline void Response::set_mime(::std::string&& value) {
  
  mime_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:so_rtrs.schedule.Response.mime)
}
#endif
inline void Response::set_mime(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  mime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:so_rtrs.schedule.Response.mime)
}
inline void Response::set_mime(const char* value, size_t size) {
  
  mime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:so_rtrs.schedule.Response.mime)
}
inline ::std::string* Response::mutable_mime() {
  
  // @@protoc_insertion_point(field_mutable:so_rtrs.schedule.Response.mime)
  return mime_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Response::release_mime() {
  // @@protoc_insertion_point(field_release:so_rtrs.schedule.Response.mime)
  
  return mime_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Response::set_allocated_mime(::std::string* mime) {
  if (mime != NULL) {
    
  } else {
    
  }
  mime_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), mime);
  // @@protoc_insertion_point(field_set_allocated:so_rtrs.schedule.Response.mime)
}

// repeated .so_rtrs.schedule.ParamKV header = 2;
inline int Response::header_size() const {
  return header_.size();
}
inline void Response::clear_header() {
  header_.Clear();
}
inline ::so_rtrs::schedule::ParamKV* Response::mutable_header(int index) {
  // @@protoc_insertion_point(field_mutable:so_rtrs.schedule.Response.header)
  return header_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::so_rtrs::schedule::ParamKV >*
Response::mutable_header() {
  // @@protoc_insertion_point(field_mutable_list:so_rtrs.schedule.Response.header)
  return &header_;
}
inline const ::so_rtrs::schedule::ParamKV& Response::header(int index) const {
  // @@protoc_insertion_point(field_get:so_rtrs.schedule.Response.header)
  return header_.Get(index);
}
inline ::so_rtrs::schedule::ParamKV* Response::add_header() {
  // @@protoc_insertion_point(field_add:so_rtrs.schedule.Response.header)
  return header_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::so_rtrs::schedule::ParamKV >&
Response::header() const {
  // @@protoc_insertion_point(field_list:so_rtrs.schedule.Response.header)
  return header_;
}

// fixed32 code = 3;
inline void Response::clear_code() {
  code_ = 0u;
}
inline ::google::protobuf::uint32 Response::code() const {
  // @@protoc_insertion_point(field_get:so_rtrs.schedule.Response.code)
  return code_;
}
inline void Response::set_code(::google::protobuf::uint32 value) {
  
  code_ = value;
  // @@protoc_insertion_point(field_set:so_rtrs.schedule.Response.code)
}

// bytes body = 4;
inline void Response::clear_body() {
  body_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Response::body() const {
  // @@protoc_insertion_point(field_get:so_rtrs.schedule.Response.body)
  return body_.GetNoArena();
}
inline void Response::set_body(const ::std::string& value) {
  
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:so_rtrs.schedule.Response.body)
}
#if LANG_CXX11
inline void Response::set_body(::std::string&& value) {
  
  body_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:so_rtrs.schedule.Response.body)
}
#endif
inline void Response::set_body(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:so_rtrs.schedule.Response.body)
}
inline void Response::set_body(const void* value, size_t size) {
  
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:so_rtrs.schedule.Response.body)
}
inline ::std::string* Response::mutable_body() {
  
  // @@protoc_insertion_point(field_mutable:so_rtrs.schedule.Response.body)
  return body_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Response::release_body() {
  // @@protoc_insertion_point(field_release:so_rtrs.schedule.Response.body)
  
  return body_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Response::set_allocated_body(::std::string* body) {
  if (body != NULL) {
    
  } else {
    
  }
  body_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), body);
  // @@protoc_insertion_point(field_set_allocated:so_rtrs.schedule.Response.body)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace schedule
}  // namespace so_rtrs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_rtrs_5fschedule_2eproto
