// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from date.djinni

#pragma once

#include "../cpp/map_date_record.hpp"

namespace Cxns {

public ref class MapDateRecord sealed : public Platform::Object {
public:
    property Windows::Foundation::Collections::IMap<Platform::String^, Windows::Foundation::DateTime>^ DatesById;

    MapDateRecord(Windows::Foundation::Collections::IMap<Platform::String^, Windows::Foundation::DateTime>^ DatesById) {
        this->DatesById = DatesById;
    }
    MapDateRecord() {}
internal:
    ::MapDateRecord toCpp();
    static MapDateRecord^ fromCpp(const ::MapDateRecord& value);
};

}  // namespace Cxns
