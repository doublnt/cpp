#include <iostream>

#include "Sales_item.h"

int main() {
  Sales_item salesItem;

  if (std::cin >> salesItem) {
    Sales_item trans;

    while (std::cin >> trans) {
      if (salesItem.isbn == trans.isbn)
        salesItem += trans;
      else {
        std::cout << salesItem << std::endl;
        salesItem = trans;
      }
    }
    std::cout << salesItem << std::endl;
  } else {
    std::cerr << "No Data!" << std::endl;
    return -1;
  }
  return 0;
}