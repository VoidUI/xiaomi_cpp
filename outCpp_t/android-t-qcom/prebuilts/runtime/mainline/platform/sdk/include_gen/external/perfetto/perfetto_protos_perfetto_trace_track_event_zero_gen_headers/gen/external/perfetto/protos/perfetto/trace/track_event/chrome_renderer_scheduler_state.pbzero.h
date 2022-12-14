// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_RENDERER_SCHEDULER_STATE_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_RENDERER_SCHEDULER_STATE_PROTO_H_

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

enum ChromeRAILMode : int32_t;

enum ChromeRAILMode : int32_t {
  RAIL_MODE_NONE = 0,
  RAIL_MODE_RESPONSE = 1,
  RAIL_MODE_ANIMATION = 2,
  RAIL_MODE_IDLE = 3,
  RAIL_MODE_LOAD = 4,
};

const ChromeRAILMode ChromeRAILMode_MIN = RAIL_MODE_NONE;
const ChromeRAILMode ChromeRAILMode_MAX = RAIL_MODE_LOAD;

class ChromeRendererSchedulerState_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/1, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  ChromeRendererSchedulerState_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit ChromeRendererSchedulerState_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit ChromeRendererSchedulerState_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_rail_mode() const { return at<1>().valid(); }
  int32_t rail_mode() const { return at<1>().as_int32(); }
};

class ChromeRendererSchedulerState : public ::protozero::Message {
 public:
  using Decoder = ChromeRendererSchedulerState_Decoder;
  enum : int32_t {
    kRailModeFieldNumber = 1,
  };

  using FieldMetadata_RailMode =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kEnum,
      ::perfetto::protos::pbzero::ChromeRAILMode,
      ChromeRendererSchedulerState>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_RailMode kRailMode() { return {}; }
  void set_rail_mode(::perfetto::protos::pbzero::ChromeRAILMode value) {
    static constexpr uint32_t field_id = FieldMetadata_RailMode::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kEnum>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.