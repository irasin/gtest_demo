#include <string>

namespace cc {

void hello();

std::string hello(std::string name);

template <typename T>
auto add(T a, T b) -> decltype(a + b) {
  return a + b;
}

}  // namespace cc
