// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from primitive_list.djinni

#pragma once

#include "../cpp/primitive_list.hpp"

namespace System { namespace Cxns {

public ref class PrimitiveList sealed : public Platform::Object {
public:
    property Windows::Foundation::Collections::IVector<int64_t>^ List;

    PrimitiveList(Windows::Foundation::Collections::IVector<int64_t>^ List) {
        this->List = List;
    }
    PrimitiveList() {}
internal:
    ::cppns::PrimitiveList toCpp();
    static PrimitiveList^ fromCpp(const ::cppns::PrimitiveList& value);
};

} }  // namespace System::Cxns
