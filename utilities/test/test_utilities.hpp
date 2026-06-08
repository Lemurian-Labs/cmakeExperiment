#pragma once
#include <gtest/gtest.h>
#include <string>

struct GreetingCase {
    int         city_code;
    std::string expected;
};

class SwedenGreetingTest  : public testing::TestWithParam<GreetingCase> {};
class DenmarkGreetingTest : public testing::TestWithParam<GreetingCase> {};
