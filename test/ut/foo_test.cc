#include <foo.h>
#include <func.h>
#include <gflags/gflags.h>
#include <gtest/gtest.h>

DEFINE_string(name, "world", "name");
DEFINE_int32(age, 2, "age");

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

TEST(FooTest, FooWithFlags) {
  cc::Foo foo(FLAGS_name);
  EXPECT_EQ(FLAGS_name, foo.name());
  EXPECT_EQ(FLAGS_age * 2, cc::add<int>(FLAGS_age, FLAGS_age));
}
