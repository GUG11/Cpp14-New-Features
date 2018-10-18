#include <iostream>
#include <typeinfo>
#include <vector>
#include <string>

template<typename It>
void dwim(It b, It e) {
  while (b != e) {
    auto currValue = *b;
    std::cout << typeid(currValue).name() << " currValue= " << currValue << std::endl;
    b++;
  }
}

int main()
{
  std::vector<std::string> sentence = {"Prefer", "auto", "to", "explicit", "type", "declarations"};
  dwim(sentence.cbegin(), sentence.cend());
}
