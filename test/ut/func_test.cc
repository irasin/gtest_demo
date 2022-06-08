#include <func.h>
#include <gtest/gtest.h>

TEST(Testadd, add_int) { EXPECT_EQ(3, cc::add<int>(1, 2)); }

TEST(Testadd, add_double) { EXPECT_EQ(3.0, cc::add<double>(1.0, 2.0)); }
