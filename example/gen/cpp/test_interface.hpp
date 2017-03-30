// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#pragma once

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>
#include <vector>

class TestInterface {
public:
    virtual ~TestInterface() {}

    virtual std::unordered_set<std::string> get_set() = 0;

    virtual std::vector<std::string> get_list() = 0;

    virtual std::optional<int32_t> get_int_ref() = 0;

    virtual std::optional<std::string> get_string_ref() = 0;
};