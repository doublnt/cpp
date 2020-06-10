// struct Foo_Test {
//
//}

#include <iostream>

#include "Sales_YinXi_Data.h"

int main() {
  Sales_Data_YinXi sales;
  std::cout << sales.bookNo << sales.revenue << sales.units_sold << std::endl;

  // std::string str;

  // std::cin >> str;

  // std::cout << str << std::endl;

  // std::string s1, s2;

  // std::cin >> s1 >> s2;

  // std::cout << s1 << s2 << std::endl;

  /* std::string s3;

   while (std::cin >> s3) {
     std::cout << s3 << std::endl;
   }*/

  /*std::string s4;

  while (std::getline(std::cin, s4)) {
    std::cout << s4 << s4.size() << std::endl;
  }*/

  std::string str("Hello, YinXi");

  for (auto s : str) {
    std::cout << s;
  }
  std::cout << std::endl;

  for (auto c : str) {
    c = std::toupper(c);
  }

  for (auto &c : str) {
    c = std::tolower(c);
    std::cout << c;
  }
  std::cout << std::endl;

  std::string s;

  std::cout << s[0] << std::endl;

  std::cout << std::string(10, '-') << std::endl;
  std::string str_test1("Hello,World.");

  for (auto &c : str_test1) {
    c = 'X';
  }
  std::cout << str_test1 << std::endl;

  for (char c : str_test1) {
    c = 'B';
  }
  std::cout << str_test1 << std::endl;
  return 0;
}