// cpp-console-application.cpp : This file contains the 'main' function. Program
// execution begins and ends there.
//

#include <iostream>

#include "Sales_item.h"

int Sales_func() {
  Sales_item item1, item2;
  std::cin >> item1 >> item2;
  std::cout << item1 + item2 << std::endl;

  return 0;
}

int main1() {
  Sales_func();

  return 0;

  std::cout << "Hello World!\n" << std::endl;

  auto v1 = 10;

  // This is comment
  // This is second comment
  //
  std::cout << "111" << v1;
  std::cout << "222" << v1 << std::endl;

  auto sum = 0;

  for (int i = -100; i <= 100; i++) {
    sum += i;
  }

  std::cout << sum << std ::endl;

  auto value = 0;
  sum = 0;

  while (std::cin >> value) {
    sum += value;
  }

  std::cout << sum << std::endl;

  return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add
//   Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project
//   and select the .sln file