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

  std::string s4;

  while (std::getline(std::cin, s4)) {
    std::cout << s4 << s4.size() << std::endl;
  }

  return 0;
}