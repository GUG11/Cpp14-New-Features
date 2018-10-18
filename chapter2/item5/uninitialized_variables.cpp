#include <iostream>
#include <typeinfo>

int main() {
  int x1;
  // error: declaration of variable 'x2' with deduced type 'auto' requires an initializer
  // auto x2;
  auto x3 = 0;
  std::cout << typeid(x1).name() << " x1=" << x1 << std::endl;
  std::cout << typeid(x1).name() << " x3=" << x3 << std::endl;
}
