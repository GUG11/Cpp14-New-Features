#include <iostream>
#include <unordered_map>
#include <utility>

int main() {
  std::unordered_map<std::string, int> m = {
    {"a", 1},
    {"b", 2}};
  for (const std::pair<std::string, int>& p : m) {
    std::cout << p.first << " => " << p.second << std::endl; 
  }
  for (const auto& p : m) {
    std::cout << p.first << " => " << p.second << std::endl; 
  }
}
