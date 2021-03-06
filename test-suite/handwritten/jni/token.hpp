// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from token.djinni

#pragma once

#include "djinni_support.hpp"
#include "token.hpp"

namespace jnins {

class Token final : ::djinni::JniInterface<::cppns::Token, Token> {
public:
    using CppType = std::shared_ptr<::cppns::Token>;
    using JniType = jobject;

    using Boxed = Token;

    ~Token();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<Token>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return {jniEnv, ::djinni::JniClass<Token>::get()._toJava(jniEnv, c)}; }

private:
    Token();
    friend ::djinni::JniClass<Token>;
    friend ::djinni::JniInterface<::cppns::Token, Token>;

    class JavaProxy final : ::djinni::JavaProxyCacheEntry, public ::cppns::Token
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        std::string whoami() override;

    private:
        using ::djinni::JavaProxyCacheEntry::getGlobalRef;
        friend ::djinni::JniInterface<::cppns::Token, ::jnins::Token>;
        friend ::djinni::JavaProxyCache<JavaProxy>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("Token") };
    const jmethodID method_whoami { ::djinni::jniGetMethodID(clazz.get(), "whoami", "()Ljava/lang/String;") };
};

}  // namespace jnins
