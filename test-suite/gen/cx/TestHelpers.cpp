// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from test.djinni

#include "TestHelpers.h"  // my header
#include "AssortedPrimitives.h"
#include "ClientInterfaceProxy.h"
#include "Color.h"
#include "MapListRecord.h"
#include "NestedCollection.h"
#include "PrimitiveList.h"
#include "SetRecord.h"
#include "TokenProxy.h"
#include "translation.h"

namespace System { namespace Cxns {

SetRecord^ TestHelpers::GetSetRecord ()
{
    try {
        auto cppRet = ::TestHelpers::get_set_record();
        return transform<::SetRecord, SetRecord^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
bool TestHelpers::CheckSetRecord (SetRecord^ Rec)
{
    try {
        auto cppRet = ::TestHelpers::check_set_record(transform<::SetRecord, SetRecord^>()(Rec));
        return transform<bool, bool>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
PrimitiveList^ TestHelpers::GetPrimitiveList ()
{
    try {
        auto cppRet = ::TestHelpers::get_primitive_list();
        return transform<::PrimitiveList, PrimitiveList^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
bool TestHelpers::CheckPrimitiveList (PrimitiveList^ Pl)
{
    try {
        auto cppRet = ::TestHelpers::check_primitive_list(transform<::PrimitiveList, PrimitiveList^>()(Pl));
        return transform<bool, bool>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
NestedCollection^ TestHelpers::GetNestedCollection ()
{
    try {
        auto cppRet = ::TestHelpers::get_nested_collection();
        return transform<::NestedCollection, NestedCollection^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
bool TestHelpers::CheckNestedCollection (NestedCollection^ Nc)
{
    try {
        auto cppRet = ::TestHelpers::check_nested_collection(transform<::NestedCollection, NestedCollection^>()(Nc));
        return transform<bool, bool>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Windows::Foundation::Collections::IMap<Platform::String^, int64_t>^ TestHelpers::GetMap ()
{
    try {
        auto cppRet = ::TestHelpers::get_map();
        return transform<std::unordered_map<std::string, int64_t>, Windows::Foundation::Collections::IMap<Platform::String^, int64_t>^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
bool TestHelpers::CheckMap (Windows::Foundation::Collections::IMap<Platform::String^, int64_t>^ M)
{
    try {
        auto cppRet = ::TestHelpers::check_map(transform<std::unordered_map<std::string, int64_t>, Windows::Foundation::Collections::IMap<Platform::String^, int64_t>^>()(M));
        return transform<bool, bool>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Windows::Foundation::Collections::IMap<Platform::String^, int64_t>^ TestHelpers::GetEmptyMap ()
{
    try {
        auto cppRet = ::TestHelpers::get_empty_map();
        return transform<std::unordered_map<std::string, int64_t>, Windows::Foundation::Collections::IMap<Platform::String^, int64_t>^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
bool TestHelpers::CheckEmptyMap (Windows::Foundation::Collections::IMap<Platform::String^, int64_t>^ M)
{
    try {
        auto cppRet = ::TestHelpers::check_empty_map(transform<std::unordered_map<std::string, int64_t>, Windows::Foundation::Collections::IMap<Platform::String^, int64_t>^>()(M));
        return transform<bool, bool>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
MapListRecord^ TestHelpers::GetMapListRecord ()
{
    try {
        auto cppRet = ::TestHelpers::get_map_list_record();
        return transform<::MapListRecord, MapListRecord^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
bool TestHelpers::CheckMapListRecord (MapListRecord^ M)
{
    try {
        auto cppRet = ::TestHelpers::check_map_list_record(transform<::MapListRecord, MapListRecord^>()(M));
        return transform<bool, bool>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
void TestHelpers::CheckClientInterfaceAscii (ClientInterface^ I)
{
    try {
        ::TestHelpers::check_client_interface_ascii(transform<std::shared_ptr<::ClientInterface>, ClientInterface^>()(I));
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
void TestHelpers::CheckClientInterfaceNonascii (ClientInterface^ I)
{
    try {
        ::TestHelpers::check_client_interface_nonascii(transform<std::shared_ptr<::ClientInterface>, ClientInterface^>()(I));
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
void TestHelpers::CheckEnumMap (Windows::Foundation::Collections::IMap<Color, Platform::String^>^ M)
{
    try {
        ::TestHelpers::check_enum_map(transform<std::unordered_map<::color, std::string>, Windows::Foundation::Collections::IMap<Color, Platform::String^>^>()(M));
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
void TestHelpers::CheckEnum (Color C)
{
    try {
        ::TestHelpers::check_enum(transform<::color, Color>()(C));
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Token^ TestHelpers::TokenId (Token^ T)
{
    try {
        auto cppRet = ::TestHelpers::token_id(transform<std::shared_ptr<::Token>, Token^>()(T));
        return transform<std::shared_ptr<::Token>, Token^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Token^ TestHelpers::CreateCppToken ()
{
    try {
        auto cppRet = ::TestHelpers::create_cpp_token();
        return transform<std::shared_ptr<::Token>, Token^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
void TestHelpers::CheckCppToken (Token^ T)
{
    try {
        ::TestHelpers::check_cpp_token(transform<std::shared_ptr<::Token>, Token^>()(T));
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
int64_t TestHelpers::CppTokenId (Token^ T)
{
    try {
        auto cppRet = ::TestHelpers::cpp_token_id(transform<std::shared_ptr<::Token>, Token^>()(T));
        return transform<int64_t, int64_t>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
void TestHelpers::CheckTokenType (Token^ T, Platform::String^ Type)
{
    try {
        ::TestHelpers::check_token_type(transform<std::shared_ptr<::Token>, Token^>()(T), transform<std::string, Platform::String^>()(Type));
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Platform::IBox<int>^ TestHelpers::ReturnNone ()
{
    try {
        auto cppRet = ::TestHelpers::return_none();
        return transform<std::experimental::optional<int32_t>, Platform::IBox<int>^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
AssortedPrimitives^ TestHelpers::AssortedPrimitivesId (AssortedPrimitives^ I)
{
    try {
        auto cppRet = ::TestHelpers::assorted_primitives_id(transform<::AssortedPrimitives, AssortedPrimitives^>()(I));
        return transform<::AssortedPrimitives, AssortedPrimitives^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Platform::Array<uint8_t>^ TestHelpers::IdBinary (const Platform::Array<uint8_t>^ B)
{
    try {
        auto cppRet = ::TestHelpers::id_binary(transform<std::vector<uint8_t>, Platform::Array<uint8_t>^>()(B));
        return transform<std::vector<uint8_t>, Platform::Array<uint8_t>^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}

} }  // namespace System::Cxns
