// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from nested_collection.djinni

#pragma once

#include "../cpp/nested_collection.hpp"

namespace System { namespace Cxns {

public ref class NestedCollection sealed : public Platform::Object {
public:
    property Windows::Foundation::Collections::IVector<Windows::Foundation::Collections::IIterable<Platform::String^>^>^ SetList;

    NestedCollection(Windows::Foundation::Collections::IVector<Windows::Foundation::Collections::IIterable<Platform::String^>^>^ SetList) {
        this->SetList = SetList;
    }
    NestedCollection() {}
internal:
    ::cppns::NestedCollection toCpp();
    static NestedCollection^ fromCpp(const ::cppns::NestedCollection& value);
};

} }  // namespace System::Cxns
