#include <functional>
#include <typeinfo>
#include <iostream>
#include <cassert>

int main() {
  std::function<int(int)> doubleFunc1 = [](int x) { return 2 * x; };
  auto doubleFunc2 = [](const auto x) { return 2 * x; };
  std::cout << "doubleFunc1 type: " << typeid(doubleFunc1).name() << std::endl;
  std::cout << "doubleFunc2 type: " << typeid(doubleFunc2).name() << std::endl;
  assert(doubleFunc1(2) == doubleFunc2(2));
}
