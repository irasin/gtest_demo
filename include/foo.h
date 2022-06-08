#include <string>

namespace cc {
class Foo {
 public:
  Foo();
  Foo(std::string name);
  std::string name();
  std::string hello_from_foo();

 private:
  std::string name_;
};

}  // namespace cc