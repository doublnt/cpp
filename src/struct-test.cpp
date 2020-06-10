// struct Foo_Test {
//
//}

#include <iostream>

#include "Sales_YinXi_Data.h"

int main() {
  Sales_Data_YinXi sales;
  std::cout << sales.bookNo << sales.revenue << sales.units_sold << std::endl;

  return 0;
}