// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from duration.djinni

#pragma once

#include "djinni_support.hpp"
#include "record_with_duration_and_derivings.hpp"

namespace jnins {

class RecordWithDurationAndDerivings final {
public:
    using CppType = ::cppns::RecordWithDurationAndDerivings;
    using JniType = jobject;

    using Boxed = RecordWithDurationAndDerivings;

    ~RecordWithDurationAndDerivings();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    RecordWithDurationAndDerivings();
    friend ::djinni::JniClass<RecordWithDurationAndDerivings>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("RecordWithDurationAndDerivings") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/time/Duration;)V") };
    const jfieldID field_dt { ::djinni::jniGetFieldID(clazz.get(), "dt", "Ljava/time/Duration;") };
};

}  // namespace jnins