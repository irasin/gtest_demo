#include <gflags/gflags.h>
#include <gtest/gtest.h>

#include <iostream>
#include <string>

DEFINE_string(name, "hello", "name");
DEFINE_int32(age, 1, "age");

TEST(GFLAGS, test_cmd) {
  std::cout << "name: " << FLAGS_name << std::endl;
  std::cout << "age: " << FLAGS_age << std::endl;
}
