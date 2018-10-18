#include <iostream>
#include <vector>

int main() {
  std::vector<bool> v(4294967296); // 2^32
  unsigned sz = v.size();
  auto sz2 = v.size();
  std::cout << "sz=" << sz << std::endl
            << "sz2=" << sz2 << std::endl;
}
