#include <gflags/gflags.h>

#include <iostream>
#include <string>

DEFINE_string(name, "", "name");
DEFINE_int32(age, 0, "age");

int main(int argc, char* argv[]) {
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  std::cout << "name: " << FLAGS_name << std::endl;
  std::cout << "age: " << FLAGS_age << std::endl;
  return 0;
}
