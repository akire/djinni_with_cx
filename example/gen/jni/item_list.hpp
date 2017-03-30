// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#pragma once

#include "djinni_support.hpp"
#include "item_list.hpp"

namespace djinni_generated {

class ItemList final {
public:
    using CppType = ::ItemList;
    using JniType = jobject;

    using Boxed = ItemList;

    ~ItemList();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    ItemList();
    friend ::djinni::JniClass<ItemList>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("ItemList") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/util/ArrayList;)V") };
    const jfieldID field_items { ::djinni::jniGetFieldID(clazz.get(), "items", "Ljava/util/ArrayList;") };
};

}  // namespace djinni_generated