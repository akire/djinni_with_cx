// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from map.djinni

#pragma once

#include "djinni_support.hpp"
#include "map_record.hpp"

namespace jnins {

class MapRecord final {
public:
    using CppType = ::cppns::MapRecord;
    using JniType = jobject;

    using Boxed = MapRecord;

    ~MapRecord();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    MapRecord();
    friend ::djinni::JniClass<MapRecord>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("MapRecord") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/util/HashMap;Ljava/util/HashMap;)V") };
    const jfieldID field_map { ::djinni::jniGetFieldID(clazz.get(), "map", "Ljava/util/HashMap;") };
    const jfieldID field_imap { ::djinni::jniGetFieldID(clazz.get(), "imap", "Ljava/util/HashMap;") };
};

}  // namespace jnins