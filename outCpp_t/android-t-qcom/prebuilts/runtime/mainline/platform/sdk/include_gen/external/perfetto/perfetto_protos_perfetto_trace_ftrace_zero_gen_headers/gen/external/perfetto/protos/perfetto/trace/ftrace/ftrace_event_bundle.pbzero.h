// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_FTRACE_EVENT_BUNDLE_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_FTRACE_EVENT_BUNDLE_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/field_writer.h"
#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {

class FtraceEvent;
class FtraceEventBundle_CompactSched;
enum FtraceClock : int32_t;

enum FtraceClock : int32_t {
  FTRACE_CLOCK_UNSPECIFIED = 0,
  FTRACE_CLOCK_UNKNOWN = 1,
  FTRACE_CLOCK_GLOBAL = 2,
  FTRACE_CLOCK_LOCAL = 3,
};

const FtraceClock FtraceClock_MIN = FTRACE_CLOCK_UNSPECIFIED;
const FtraceClock FtraceClock_MAX = FTRACE_CLOCK_LOCAL;

class FtraceEventBundle_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  FtraceEventBundle_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit FtraceEventBundle_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit FtraceEventBundle_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_cpu() const { return at<1>().valid(); }
  uint32_t cpu() const { return at<1>().as_uint32(); }
  bool has_event() const { return at<2>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> event() const { return GetRepeated<::protozero::ConstBytes>(2); }
  bool has_lost_events() const { return at<3>().valid(); }
  bool lost_events() const { return at<3>().as_bool(); }
  bool has_compact_sched() const { return at<4>().valid(); }
  ::protozero::ConstBytes compact_sched() const { return at<4>().as_bytes(); }
  bool has_ftrace_clock() const { return at<5>().valid(); }
  int32_t ftrace_clock() const { return at<5>().as_int32(); }
};

class FtraceEventBundle : public ::protozero::Message {
 public:
  using Decoder = FtraceEventBundle_Decoder;
  enum : int32_t {
    kCpuFieldNumber = 1,
    kEventFieldNumber = 2,
    kLostEventsFieldNumber = 3,
    kCompactSchedFieldNumber = 4,
    kFtraceClockFieldNumber = 5,
  };
  using CompactSched = ::perfetto::protos::pbzero::FtraceEventBundle_CompactSched;

  using FieldMetadata_Cpu =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      FtraceEventBundle>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_Cpu kCpu() { return {}; }
  void set_cpu(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Cpu::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Event =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      FtraceEvent,
      FtraceEventBundle>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_Event kEvent() { return {}; }
  template <typename T = FtraceEvent> T* add_event() {
    return BeginNestedMessage<T>(2);
  }


  using FieldMetadata_LostEvents =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      FtraceEventBundle>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_LostEvents kLostEvents() { return {}; }
  void set_lost_events(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_LostEvents::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_CompactSched =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      FtraceEventBundle_CompactSched,
      FtraceEventBundle>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_CompactSched kCompactSched() { return {}; }
  template <typename T = FtraceEventBundle_CompactSched> T* set_compact_sched() {
    return BeginNestedMessage<T>(4);
  }


  using FieldMetadata_FtraceClock =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kEnum,
      ::perfetto::protos::pbzero::FtraceClock,
      FtraceEventBundle>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_FtraceClock kFtraceClock() { return {}; }
  void set_ftrace_clock(::perfetto::protos::pbzero::FtraceClock value) {
    static constexpr uint32_t field_id = FieldMetadata_FtraceClock::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kEnum>
        ::Append(*this, field_id, value);
  }
};

class FtraceEventBundle_CompactSched_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/11, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  FtraceEventBundle_CompactSched_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit FtraceEventBundle_CompactSched_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit FtraceEventBundle_CompactSched_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_intern_table() const { return at<5>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstChars> intern_table() const { return GetRepeated<::protozero::ConstChars>(5); }
  bool has_switch_timestamp() const { return at<1>().valid(); }
  ::protozero::PackedRepeatedFieldIterator<::protozero::proto_utils::ProtoWireType::kVarInt, uint64_t> switch_timestamp(bool* parse_error_ptr) const { return GetPackedRepeated<::protozero::proto_utils::ProtoWireType::kVarInt, uint64_t>(1, parse_error_ptr); }
  bool has_switch_prev_state() const { return at<2>().valid(); }
  ::protozero::PackedRepeatedFieldIterator<::protozero::proto_utils::ProtoWireType::kVarInt, int64_t> switch_prev_state(bool* parse_error_ptr) const { return GetPackedRepeated<::protozero::proto_utils::ProtoWireType::kVarInt, int64_t>(2, parse_error_ptr); }
  bool has_switch_next_pid() const { return at<3>().valid(); }
  ::protozero::PackedRepeatedFieldIterator<::protozero::proto_utils::ProtoWireType::kVarInt, int32_t> switch_next_pid(bool* parse_error_ptr) const { return GetPackedRepeated<::protozero::proto_utils::ProtoWireType::kVarInt, int32_t>(3, parse_error_ptr); }
  bool has_switch_next_prio() const { return at<4>().valid(); }
  ::protozero::PackedRepeatedFieldIterator<::protozero::proto_utils::ProtoWireType::kVarInt, int32_t> switch_next_prio(bool* parse_error_ptr) const { return GetPackedRepeated<::protozero::proto_utils::ProtoWireType::kVarInt, int32_t>(4, parse_error_ptr); }
  bool has_switch_next_comm_index() const { return at<6>().valid(); }
  ::protozero::PackedRepeatedFieldIterator<::protozero::proto_utils::ProtoWireType::kVarInt, uint32_t> switch_next_comm_index(bool* parse_error_ptr) const { return GetPackedRepeated<::protozero::proto_utils::ProtoWireType::kVarInt, uint32_t>(6, parse_error_ptr); }
  bool has_waking_timestamp() const { return at<7>().valid(); }
  ::protozero::PackedRepeatedFieldIterator<::protozero::proto_utils::ProtoWireType::kVarInt, uint64_t> waking_timestamp(bool* parse_error_ptr) const { return GetPackedRepeated<::protozero::proto_utils::ProtoWireType::kVarInt, uint64_t>(7, parse_error_ptr); }
  bool has_waking_pid() const { return at<8>().valid(); }
  ::protozero::PackedRepeatedFieldIterator<::protozero::proto_utils::ProtoWireType::kVarInt, int32_t> waking_pid(bool* parse_error_ptr) const { return GetPackedRepeated<::protozero::proto_utils::ProtoWireType::kVarInt, int32_t>(8, parse_error_ptr); }
  bool has_waking_target_cpu() const { return at<9>().valid(); }
  ::protozero::PackedRepeatedFieldIterator<::protozero::proto_utils::ProtoWireType::kVarInt, int32_t> waking_target_cpu(bool* parse_error_ptr) const { return GetPackedRepeated<::protozero::proto_utils::ProtoWireType::kVarInt, int32_t>(9, parse_error_ptr); }
  bool has_waking_prio() const { return at<10>().valid(); }
  ::protozero::PackedRepeatedFieldIterator<::protozero::proto_utils::ProtoWireType::kVarInt, int32_t> waking_prio(bool* parse_error_ptr) const { return GetPackedRepeated<::protozero::proto_utils::ProtoWireType::kVarInt, int32_t>(10, parse_error_ptr); }
  bool has_waking_comm_index() const { return at<11>().valid(); }
  ::protozero::PackedRepeatedFieldIterator<::protozero::proto_utils::ProtoWireType::kVarInt, uint32_t> waking_comm_index(bool* parse_error_ptr) const { return GetPackedRepeated<::protozero::proto_utils::ProtoWireType::kVarInt, uint32_t>(11, parse_error_ptr); }
};

class FtraceEventBundle_CompactSched : public ::protozero::Message {
 public:
  using Decoder = FtraceEventBundle_CompactSched_Decoder;
  enum : int32_t {
    kInternTableFieldNumber = 5,
    kSwitchTimestampFieldNumber = 1,
    kSwitchPrevStateFieldNumber = 2,
    kSwitchNextPidFieldNumber = 3,
    kSwitchNextPrioFieldNumber = 4,
    kSwitchNextCommIndexFieldNumber = 6,
    kWakingTimestampFieldNumber = 7,
    kWakingPidFieldNumber = 8,
    kWakingTargetCpuFieldNumber = 9,
    kWakingPrioFieldNumber = 10,
    kWakingCommIndexFieldNumber = 11,
  };

  using FieldMetadata_InternTable =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      FtraceEventBundle_CompactSched>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_InternTable kInternTable() { return {}; }
  void add_intern_table(const char* data, size_t size) {
    AppendBytes(FieldMetadata_InternTable::kFieldId, data, size);
  }
  void add_intern_table(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_InternTable::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_SwitchTimestamp =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kRepeatedPacked,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      FtraceEventBundle_CompactSched>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_SwitchTimestamp kSwitchTimestamp() { return {}; }
  void set_switch_timestamp(const ::protozero::PackedVarInt& packed_buffer) {
    AppendBytes(FieldMetadata_SwitchTimestamp::kFieldId, packed_buffer.data(),
                packed_buffer.size());
  }

  using FieldMetadata_SwitchPrevState =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kRepeatedPacked,
      ::protozero::proto_utils::ProtoSchemaType::kInt64,
      int64_t,
      FtraceEventBundle_CompactSched>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_SwitchPrevState kSwitchPrevState() { return {}; }
  void set_switch_prev_state(const ::protozero::PackedVarInt& packed_buffer) {
    AppendBytes(FieldMetadata_SwitchPrevState::kFieldId, packed_buffer.data(),
                packed_buffer.size());
  }

  using FieldMetadata_SwitchNextPid =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kRepeatedPacked,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      FtraceEventBundle_CompactSched>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_SwitchNextPid kSwitchNextPid() { return {}; }
  void set_switch_next_pid(const ::protozero::PackedVarInt& packed_buffer) {
    AppendBytes(FieldMetadata_SwitchNextPid::kFieldId, packed_buffer.data(),
                packed_buffer.size());
  }

  using FieldMetadata_SwitchNextPrio =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kRepeatedPacked,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      FtraceEventBundle_CompactSched>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_SwitchNextPrio kSwitchNextPrio() { return {}; }
  void set_switch_next_prio(const ::protozero::PackedVarInt& packed_buffer) {
    AppendBytes(FieldMetadata_SwitchNextPrio::kFieldId, packed_buffer.data(),
                packed_buffer.size());
  }

  using FieldMetadata_SwitchNextCommIndex =
    ::protozero::proto_utils::FieldMetadata<
      6,
      ::protozero::proto_utils::RepetitionType::kRepeatedPacked,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      FtraceEventBundle_CompactSched>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_SwitchNextCommIndex kSwitchNextCommIndex() { return {}; }
  void set_switch_next_comm_index(const ::protozero::PackedVarInt& packed_buffer) {
    AppendBytes(FieldMetadata_SwitchNextCommIndex::kFieldId, packed_buffer.data(),
                packed_buffer.size());
  }

  using FieldMetadata_WakingTimestamp =
    ::protozero::proto_utils::FieldMetadata<
      7,
      ::protozero::proto_utils::RepetitionType::kRepeatedPacked,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      FtraceEventBundle_CompactSched>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_WakingTimestamp kWakingTimestamp() { return {}; }
  void set_waking_timestamp(const ::protozero::PackedVarInt& packed_buffer) {
    AppendBytes(FieldMetadata_WakingTimestamp::kFieldId, packed_buffer.data(),
                packed_buffer.size());
  }

  using FieldMetadata_WakingPid =
    ::protozero::proto_utils::FieldMetadata<
      8,
      ::protozero::proto_utils::RepetitionType::kRepeatedPacked,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      FtraceEventBundle_CompactSched>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_WakingPid kWakingPid() { return {}; }
  void set_waking_pid(const ::protozero::PackedVarInt& packed_buffer) {
    AppendBytes(FieldMetadata_WakingPid::kFieldId, packed_buffer.data(),
                packed_buffer.size());
  }

  using FieldMetadata_WakingTargetCpu =
    ::protozero::proto_utils::FieldMetadata<
      9,
      ::protozero::proto_utils::RepetitionType::kRepeatedPacked,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      FtraceEventBundle_CompactSched>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_WakingTargetCpu kWakingTargetCpu() { return {}; }
  void set_waking_target_cpu(const ::protozero::PackedVarInt& packed_buffer) {
    AppendBytes(FieldMetadata_WakingTargetCpu::kFieldId, packed_buffer.data(),
                packed_buffer.size());
  }

  using FieldMetadata_WakingPrio =
    ::protozero::proto_utils::FieldMetadata<
      10,
      ::protozero::proto_utils::RepetitionType::kRepeatedPacked,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      FtraceEventBundle_CompactSched>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_WakingPrio kWakingPrio() { return {}; }
  void set_waking_prio(const ::protozero::PackedVarInt& packed_buffer) {
    AppendBytes(FieldMetadata_WakingPrio::kFieldId, packed_buffer.data(),
                packed_buffer.size());
  }

  using FieldMetadata_WakingCommIndex =
    ::protozero::proto_utils::FieldMetadata<
      11,
      ::protozero::proto_utils::RepetitionType::kRepeatedPacked,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      FtraceEventBundle_CompactSched>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_WakingCommIndex kWakingCommIndex() { return {}; }
  void set_waking_comm_index(const ::protozero::PackedVarInt& packed_buffer) {
    AppendBytes(FieldMetadata_WakingCommIndex::kFieldId, packed_buffer.data(),
                packed_buffer.size());
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.