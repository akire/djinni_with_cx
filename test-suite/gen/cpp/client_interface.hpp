// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client_interface.djinni

#pragma once

#include "client_returned_record.hpp"
#include "optional\optional.hpp"
#include <cstdint>
#include <string>
#include <vector>

namespace cppns {

class ClientInterface {
public:
    virtual ~ClientInterface() {}

    /** Returns record of given string */
    virtual ClientReturnedRecord get_record(int64_t record_id, const std::string & utf8string, const std::experimental::optional<std::string> & misc) = 0;

    virtual double identifier_check(const std::vector<uint8_t> & data, int32_t r, int64_t jret) = 0;

    virtual std::string return_str() = 0;
};

}  // namespace cppns
