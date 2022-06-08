#include <foo.h>
#include <func.h>

#include <string>

namespace cc {

Foo::Foo() : name_("") {}

Foo::Foo(std::string name) : name_(name) {}

std::string Foo::name() { return name_; }

std::string Foo::hello_from_foo() { return hello(name_); }

}  // namespace cc