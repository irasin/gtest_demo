#include <foo.h>
#include <func.h>
#include <gflags/gflags.h>
#include <gtest/gtest.h>

TEST(FooTest, Foo) {
  cc::Foo foo;
  EXPECT_EQ("", foo.name());
}

TEST(FooTest, FooWithName) {
  cc::Foo foo("foo");
  EXPECT_EQ("foo", foo.name());
}

TEST(FooTest, HelloFromFoo) {
  cc::Foo foo("foo");
  ("hello foo", foo.hello_from_foo());
}

TEST(AddTest, Add) {
  EXPECT_EQ(3, cc::add<int>(1, 2));
  EXPECT_EQ(3.0, cc::add<double>(1.0, 2.0));
}

DEFINE_string(name, "", "name");
DEFINE_int32(age, 0, "age");

int main(int argc, char* argv[]) {
  testing::InitGoogleTest(&argc, argv);
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  std::cout << "name: " << FLAGS_name << std::endl;
  std::cout << "age: " << FLAGS_age << std::endl;
  return RUN_ALL_TESTS();
}