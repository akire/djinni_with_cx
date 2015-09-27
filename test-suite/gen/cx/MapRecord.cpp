// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from map.djinni

#include "MapRecord.h"  // my header
#include "translation.h"

namespace System { namespace Cxns {


::MapRecord MapRecord::toCpp() {
    return ::MapRecord(
        transform<std::unordered_map<std::string, int64_t>, Windows::Foundation::Collections::IMap<Platform::String^, int64_t>^>()(Map),
        transform<std::unordered_map<int32_t, int32_t>, Windows::Foundation::Collections::IMap<int32_t, int32_t>^>()(Imap));
}

MapRecord^ MapRecord::fromCpp(const ::MapRecord& value) {
    MapRecord^ ret = ref new MapRecord();
    ret->Map = transform<std::unordered_map<std::string, int64_t>, Windows::Foundation::Collections::IMap<Platform::String^, int64_t>^>()(value.map);
    ret->Imap = transform<std::unordered_map<int32_t, int32_t>, Windows::Foundation::Collections::IMap<int32_t, int32_t>^>()(value.imap);
    return ret;
}

} }  // namespace System::Cxns
