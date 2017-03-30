// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from primtypes.djinni

#pragma once

#include "../cpp/assorted_primitives.hpp"

namespace System { namespace Cxns {

public ref class AssortedPrimitives sealed : public Platform::Object {
    property bool B;
    property int8_t Eight;
    property int16_t Sixteen;
    property int32_t Thirtytwo;
    property int64_t Sixtyfour;
    property float Fthirtytwo;
    property double Fsixtyfour;
    property BoolRef^ OB;
    property ByteRef^ OEight;
    property ShortRef^ OSixteen;
    property IntRef^ OThirtytwo;
    property LongRef^ OSixtyfour;
    property FloatRef^ OFthirtytwo;
    property DoubleRef^ OFsixtyfour;
internal:
    ::cppns::AssortedPrimitives toCpp();
    static AssortedPrimitives^ fromCpp(const ::cppns::AssortedPrimitives& value);

    bool Equals(AssortedPrimitives^ rhs);
};

} }  // namespace System::Cxns