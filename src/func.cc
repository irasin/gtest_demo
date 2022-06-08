#include <func.h>

#include <iostream>
#include <string>

namespace cc {

void hello() { std::cout << "Hello, World!" << std::endl; }

std::string hello(std::string name) {
  std::cout << "Hello, " << name << "!" << std::endl;
  return name;
}

}  // namespace cc
