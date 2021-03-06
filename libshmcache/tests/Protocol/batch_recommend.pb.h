// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: batch_recommend.proto

#ifndef PROTOBUF_INCLUDED_batch_5frecommend_2eproto
#define PROTOBUF_INCLUDED_batch_5frecommend_2eproto

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
#include "recommend.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_batch_5frecommend_2eproto 

namespace protobuf_batch_5frecommend_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
}  // namespace protobuf_batch_5frecommend_2eproto
namespace so_rtrs {
class BatchRequest;
class BatchRequestDefaultTypeInternal;
extern BatchRequestDefaultTypeInternal _BatchRequest_default_instance_;
class BatchResponse;
class BatchResponseDefaultTypeInternal;
extern BatchResponseDefaultTypeInternal _BatchResponse_default_instance_;
}  // namespace so_rtrs
namespace google {
namespace protobuf {
template<> ::so_rtrs::BatchRequest* Arena::CreateMaybeMessage<::so_rtrs::BatchRequest>(Arena*);
template<> ::so_rtrs::BatchResponse* Arena::CreateMaybeMessage<::so_rtrs::BatchResponse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace so_rtrs {

// ===================================================================

class BatchRequest : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:so_rtrs.BatchRequest) */ {
 public:
  BatchRequest();
  virtual ~BatchRequest();

  BatchRequest(const BatchRequest& from);

  inline BatchRequest& operator=(const BatchRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BatchRequest(BatchRequest&& from) noexcept
    : BatchRequest() {
    *this = ::std::move(from);
  }

  inline BatchRequest& operator=(BatchRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const BatchRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BatchRequest* internal_default_instance() {
    return reinterpret_cast<const BatchRequest*>(
               &_BatchRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(BatchRequest* other);
  friend void swap(BatchRequest& a, BatchRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BatchRequest* New() const final {
    return CreateMaybeMessage<BatchRequest>(NULL);
  }

  BatchRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<BatchRequest>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    final;
  void CopyFrom(const BatchRequest& from);
  void MergeFrom(const BatchRequest& from);
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
  void InternalSwap(BatchRequest* other);
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

  // repeated .so_rtrs.RecomRequest recomRequestList = 1;
  int recomrequestlist_size() const;
  void clear_recomrequestlist();
  static const int kRecomRequestListFieldNumber = 1;
  ::so_rtrs::RecomRequest* mutable_recomrequestlist(int index);
  ::google::protobuf::RepeatedPtrField< ::so_rtrs::RecomRequest >*
      mutable_recomrequestlist();
  const ::so_rtrs::RecomRequest& recomrequestlist(int index) const;
  ::so_rtrs::RecomRequest* add_recomrequestlist();
  const ::google::protobuf::RepeatedPtrField< ::so_rtrs::RecomRequest >&
      recomrequestlist() const;

  // @@protoc_insertion_point(class_scope:so_rtrs.BatchRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::so_rtrs::RecomRequest > recomrequestlist_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_batch_5frecommend_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class BatchResponse : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:so_rtrs.BatchResponse) */ {
 public:
  BatchResponse();
  virtual ~BatchResponse();

  BatchResponse(const BatchResponse& from);

  inline BatchResponse& operator=(const BatchResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BatchResponse(BatchResponse&& from) noexcept
    : BatchResponse() {
    *this = ::std::move(from);
  }

  inline BatchResponse& operator=(BatchResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const BatchResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BatchResponse* internal_default_instance() {
    return reinterpret_cast<const BatchResponse*>(
               &_BatchResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(BatchResponse* other);
  friend void swap(BatchResponse& a, BatchResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BatchResponse* New() const final {
    return CreateMaybeMessage<BatchResponse>(NULL);
  }

  BatchResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<BatchResponse>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    final;
  void CopyFrom(const BatchResponse& from);
  void MergeFrom(const BatchResponse& from);
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
  void InternalSwap(BatchResponse* other);
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

  // repeated .so_rtrs.RecomResponse recomResponseList = 1;
  int recomresponselist_size() const;
  void clear_recomresponselist();
  static const int kRecomResponseListFieldNumber = 1;
  ::so_rtrs::RecomResponse* mutable_recomresponselist(int index);
  ::google::protobuf::RepeatedPtrField< ::so_rtrs::RecomResponse >*
      mutable_recomresponselist();
  const ::so_rtrs::RecomResponse& recomresponselist(int index) const;
  ::so_rtrs::RecomResponse* add_recomresponselist();
  const ::google::protobuf::RepeatedPtrField< ::so_rtrs::RecomResponse >&
      recomresponselist() const;

  // @@protoc_insertion_point(class_scope:so_rtrs.BatchResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::so_rtrs::RecomResponse > recomresponselist_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_batch_5frecommend_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BatchRequest

// repeated .so_rtrs.RecomRequest recomRequestList = 1;
inline int BatchRequest::recomrequestlist_size() const {
  return recomrequestlist_.size();
}
inline ::so_rtrs::RecomRequest* BatchRequest::mutable_recomrequestlist(int index) {
  // @@protoc_insertion_point(field_mutable:so_rtrs.BatchRequest.recomRequestList)
  return recomrequestlist_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::so_rtrs::RecomRequest >*
BatchRequest::mutable_recomrequestlist() {
  // @@protoc_insertion_point(field_mutable_list:so_rtrs.BatchRequest.recomRequestList)
  return &recomrequestlist_;
}
inline const ::so_rtrs::RecomRequest& BatchRequest::recomrequestlist(int index) const {
  // @@protoc_insertion_point(field_get:so_rtrs.BatchRequest.recomRequestList)
  return recomrequestlist_.Get(index);
}
inline ::so_rtrs::RecomRequest* BatchRequest::add_recomrequestlist() {
  // @@protoc_insertion_point(field_add:so_rtrs.BatchRequest.recomRequestList)
  return recomrequestlist_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::so_rtrs::RecomRequest >&
BatchRequest::recomrequestlist() const {
  // @@protoc_insertion_point(field_list:so_rtrs.BatchRequest.recomRequestList)
  return recomrequestlist_;
}

// -------------------------------------------------------------------

// BatchResponse

// repeated .so_rtrs.RecomResponse recomResponseList = 1;
inline int BatchResponse::recomresponselist_size() const {
  return recomresponselist_.size();
}
inline ::so_rtrs::RecomResponse* BatchResponse::mutable_recomresponselist(int index) {
  // @@protoc_insertion_point(field_mutable:so_rtrs.BatchResponse.recomResponseList)
  return recomresponselist_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::so_rtrs::RecomResponse >*
BatchResponse::mutable_recomresponselist() {
  // @@protoc_insertion_point(field_mutable_list:so_rtrs.BatchResponse.recomResponseList)
  return &recomresponselist_;
}
inline const ::so_rtrs::RecomResponse& BatchResponse::recomresponselist(int index) const {
  // @@protoc_insertion_point(field_get:so_rtrs.BatchResponse.recomResponseList)
  return recomresponselist_.Get(index);
}
inline ::so_rtrs::RecomResponse* BatchResponse::add_recomresponselist() {
  // @@protoc_insertion_point(field_add:so_rtrs.BatchResponse.recomResponseList)
  return recomresponselist_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::so_rtrs::RecomResponse >&
BatchResponse::recomresponselist() const {
  // @@protoc_insertion_point(field_list:so_rtrs.BatchResponse.recomResponseList)
  return recomresponselist_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace so_rtrs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_batch_5frecommend_2eproto
