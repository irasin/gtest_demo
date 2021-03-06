#include <gflags/gflags.h>
#include <gtest/gtest.h>

int main(int argc, char* argv[]) {
  testing::InitGoogleTest();
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  return RUN_ALL_TESTS();
}