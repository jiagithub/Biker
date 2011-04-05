// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "fileformat.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace OSMPBF {

namespace {

const ::google::protobuf::Descriptor* Blob_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Blob_reflection_ = NULL;
const ::google::protobuf::Descriptor* BlobHeader_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BlobHeader_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_fileformat_2eproto() {
  protobuf_AddDesc_fileformat_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "fileformat.proto");
  GOOGLE_CHECK(file != NULL);
  Blob_descriptor_ = file->message_type(0);
  static const int Blob_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Blob, raw_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Blob, raw_size_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Blob, zlib_data_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Blob, lzma_data_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Blob, obsolete_bzip2_data_),
  };
  Blob_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Blob_descriptor_,
      Blob::default_instance_,
      Blob_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Blob, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Blob, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Blob));
  BlobHeader_descriptor_ = file->message_type(1);
  static const int BlobHeader_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlobHeader, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlobHeader, indexdata_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlobHeader, datasize_),
  };
  BlobHeader_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BlobHeader_descriptor_,
      BlobHeader::default_instance_,
      BlobHeader_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlobHeader, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlobHeader, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BlobHeader));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_fileformat_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Blob_descriptor_, &Blob::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BlobHeader_descriptor_, &BlobHeader::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_fileformat_2eproto() {
  delete Blob::default_instance_;
  delete Blob_reflection_;
  delete BlobHeader::default_instance_;
  delete BlobHeader_reflection_;
}

void protobuf_AddDesc_fileformat_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020fileformat.proto\022\006OSMPBF\"l\n\004Blob\022\013\n\003ra"
    "w\030\001 \001(\014\022\020\n\010raw_size\030\002 \001(\005\022\021\n\tzlib_data\030\003"
    " \001(\014\022\021\n\tlzma_data\030\004 \001(\014\022\037\n\023OBSOLETE_bzip"
    "2_data\030\005 \001(\014B\002\030\001\"\?\n\nBlobHeader\022\014\n\004type\030\001"
    " \002(\t\022\021\n\tindexdata\030\002 \001(\014\022\020\n\010datasize\030\003 \002("
    "\005B\017\n\rcrosby.binary", 218);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "fileformat.proto", &protobuf_RegisterTypes);
  Blob::default_instance_ = new Blob();
  BlobHeader::default_instance_ = new BlobHeader();
  Blob::default_instance_->InitAsDefaultInstance();
  BlobHeader::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_fileformat_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_fileformat_2eproto {
  StaticDescriptorInitializer_fileformat_2eproto() {
    protobuf_AddDesc_fileformat_2eproto();
  }
} static_descriptor_initializer_fileformat_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int Blob::kRawFieldNumber;
const int Blob::kRawSizeFieldNumber;
const int Blob::kZlibDataFieldNumber;
const int Blob::kLzmaDataFieldNumber;
const int Blob::kOBSOLETEBzip2DataFieldNumber;
#endif  // !_MSC_VER

Blob::Blob()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Blob::InitAsDefaultInstance() {
}

Blob::Blob(const Blob& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Blob::SharedCtor() {
  _cached_size_ = 0;
  raw_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  raw_size_ = 0;
  zlib_data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  lzma_data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  obsolete_bzip2_data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Blob::~Blob() {
  SharedDtor();
}

void Blob::SharedDtor() {
  if (raw_ != &::google::protobuf::internal::kEmptyString) {
    delete raw_;
  }
  if (zlib_data_ != &::google::protobuf::internal::kEmptyString) {
    delete zlib_data_;
  }
  if (lzma_data_ != &::google::protobuf::internal::kEmptyString) {
    delete lzma_data_;
  }
  if (obsolete_bzip2_data_ != &::google::protobuf::internal::kEmptyString) {
    delete obsolete_bzip2_data_;
  }
  if (this != default_instance_) {
  }
}

void Blob::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Blob::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Blob_descriptor_;
}

const Blob& Blob::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_fileformat_2eproto();  return *default_instance_;
}

Blob* Blob::default_instance_ = NULL;

Blob* Blob::New() const {
  return new Blob;
}

void Blob::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_raw()) {
      if (raw_ != &::google::protobuf::internal::kEmptyString) {
        raw_->clear();
      }
    }
    raw_size_ = 0;
    if (has_zlib_data()) {
      if (zlib_data_ != &::google::protobuf::internal::kEmptyString) {
        zlib_data_->clear();
      }
    }
    if (has_lzma_data()) {
      if (lzma_data_ != &::google::protobuf::internal::kEmptyString) {
        lzma_data_->clear();
      }
    }
    if (has_obsolete_bzip2_data()) {
      if (obsolete_bzip2_data_ != &::google::protobuf::internal::kEmptyString) {
        obsolete_bzip2_data_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Blob::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bytes raw = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_raw()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_raw_size;
        break;
      }
      
      // optional int32 raw_size = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_raw_size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &raw_size_)));
          set_has_raw_size();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_zlib_data;
        break;
      }
      
      // optional bytes zlib_data = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_zlib_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_zlib_data()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_lzma_data;
        break;
      }
      
      // optional bytes lzma_data = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_lzma_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_lzma_data()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_OBSOLETE_bzip2_data;
        break;
      }
      
      // optional bytes OBSOLETE_bzip2_data = 5 [deprecated = true];
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_OBSOLETE_bzip2_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_obsolete_bzip2_data()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Blob::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional bytes raw = 1;
  if (has_raw()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      1, this->raw(), output);
  }
  
  // optional int32 raw_size = 2;
  if (has_raw_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->raw_size(), output);
  }
  
  // optional bytes zlib_data = 3;
  if (has_zlib_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      3, this->zlib_data(), output);
  }
  
  // optional bytes lzma_data = 4;
  if (has_lzma_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      4, this->lzma_data(), output);
  }
  
  // optional bytes OBSOLETE_bzip2_data = 5 [deprecated = true];
  if (has_obsolete_bzip2_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      5, this->obsolete_bzip2_data(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Blob::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional bytes raw = 1;
  if (has_raw()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->raw(), target);
  }
  
  // optional int32 raw_size = 2;
  if (has_raw_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->raw_size(), target);
  }
  
  // optional bytes zlib_data = 3;
  if (has_zlib_data()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->zlib_data(), target);
  }
  
  // optional bytes lzma_data = 4;
  if (has_lzma_data()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        4, this->lzma_data(), target);
  }
  
  // optional bytes OBSOLETE_bzip2_data = 5 [deprecated = true];
  if (has_obsolete_bzip2_data()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        5, this->obsolete_bzip2_data(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Blob::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional bytes raw = 1;
    if (has_raw()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->raw());
    }
    
    // optional int32 raw_size = 2;
    if (has_raw_size()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->raw_size());
    }
    
    // optional bytes zlib_data = 3;
    if (has_zlib_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->zlib_data());
    }
    
    // optional bytes lzma_data = 4;
    if (has_lzma_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->lzma_data());
    }
    
    // optional bytes OBSOLETE_bzip2_data = 5 [deprecated = true];
    if (has_obsolete_bzip2_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->obsolete_bzip2_data());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Blob::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Blob* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Blob*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Blob::MergeFrom(const Blob& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_raw()) {
      set_raw(from.raw());
    }
    if (from.has_raw_size()) {
      set_raw_size(from.raw_size());
    }
    if (from.has_zlib_data()) {
      set_zlib_data(from.zlib_data());
    }
    if (from.has_lzma_data()) {
      set_lzma_data(from.lzma_data());
    }
    if (from.has_obsolete_bzip2_data()) {
      set_obsolete_bzip2_data(from.obsolete_bzip2_data());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Blob::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Blob::CopyFrom(const Blob& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Blob::IsInitialized() const {
  
  return true;
}

void Blob::Swap(Blob* other) {
  if (other != this) {
    std::swap(raw_, other->raw_);
    std::swap(raw_size_, other->raw_size_);
    std::swap(zlib_data_, other->zlib_data_);
    std::swap(lzma_data_, other->lzma_data_);
    std::swap(obsolete_bzip2_data_, other->obsolete_bzip2_data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Blob::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Blob_descriptor_;
  metadata.reflection = Blob_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int BlobHeader::kTypeFieldNumber;
const int BlobHeader::kIndexdataFieldNumber;
const int BlobHeader::kDatasizeFieldNumber;
#endif  // !_MSC_VER

BlobHeader::BlobHeader()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BlobHeader::InitAsDefaultInstance() {
}

BlobHeader::BlobHeader(const BlobHeader& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BlobHeader::SharedCtor() {
  _cached_size_ = 0;
  type_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  indexdata_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  datasize_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BlobHeader::~BlobHeader() {
  SharedDtor();
}

void BlobHeader::SharedDtor() {
  if (type_ != &::google::protobuf::internal::kEmptyString) {
    delete type_;
  }
  if (indexdata_ != &::google::protobuf::internal::kEmptyString) {
    delete indexdata_;
  }
  if (this != default_instance_) {
  }
}

void BlobHeader::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BlobHeader::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BlobHeader_descriptor_;
}

const BlobHeader& BlobHeader::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_fileformat_2eproto();  return *default_instance_;
}

BlobHeader* BlobHeader::default_instance_ = NULL;

BlobHeader* BlobHeader::New() const {
  return new BlobHeader;
}

void BlobHeader::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_type()) {
      if (type_ != &::google::protobuf::internal::kEmptyString) {
        type_->clear();
      }
    }
    if (has_indexdata()) {
      if (indexdata_ != &::google::protobuf::internal::kEmptyString) {
        indexdata_->clear();
      }
    }
    datasize_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BlobHeader::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string type = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_type()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->type().data(), this->type().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_indexdata;
        break;
      }
      
      // optional bytes indexdata = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_indexdata:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_indexdata()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_datasize;
        break;
      }
      
      // required int32 datasize = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_datasize:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &datasize_)));
          set_has_datasize();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void BlobHeader::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->type().data(), this->type().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->type(), output);
  }
  
  // optional bytes indexdata = 2;
  if (has_indexdata()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      2, this->indexdata(), output);
  }
  
  // required int32 datasize = 3;
  if (has_datasize()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->datasize(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BlobHeader::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->type().data(), this->type().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->type(), target);
  }
  
  // optional bytes indexdata = 2;
  if (has_indexdata()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->indexdata(), target);
  }
  
  // required int32 datasize = 3;
  if (has_datasize()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->datasize(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BlobHeader::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->type());
    }
    
    // optional bytes indexdata = 2;
    if (has_indexdata()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->indexdata());
    }
    
    // required int32 datasize = 3;
    if (has_datasize()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->datasize());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BlobHeader::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BlobHeader* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BlobHeader*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BlobHeader::MergeFrom(const BlobHeader& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_indexdata()) {
      set_indexdata(from.indexdata());
    }
    if (from.has_datasize()) {
      set_datasize(from.datasize());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BlobHeader::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BlobHeader::CopyFrom(const BlobHeader& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BlobHeader::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000005) != 0x00000005) return false;
  
  return true;
}

void BlobHeader::Swap(BlobHeader* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(indexdata_, other->indexdata_);
    std::swap(datasize_, other->datasize_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BlobHeader::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BlobHeader_descriptor_;
  metadata.reflection = BlobHeader_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace OSMPBF

// @@protoc_insertion_point(global_scope)
