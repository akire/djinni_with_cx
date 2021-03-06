// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from map.djinni

#pragma once

#include "../cpp/map_record.hpp"

namespace Cxns {

public ref class MapRecord sealed : public Platform::Object {
public:
    property Windows::Foundation::Collections::IMap<Platform::String^, int64_t>^ Map;
    property Windows::Foundation::Collections::IMap<int32_t, int32_t>^ Imap;

    MapRecord(Windows::Foundation::Collections::IMap<Platform::String^, int64_t>^ Map,
              Windows::Foundation::Collections::IMap<int32_t, int32_t>^ Imap) {
        this->Map = Map;
        this->Imap = Imap;
    }
    MapRecord() {}
internal:
    ::MapRecord toCpp();
    static MapRecord^ fromCpp(const ::MapRecord& value);
};

}  // namespace Cxns
