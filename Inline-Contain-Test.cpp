#include <cmath>
#include <iostream>

int testMethod() {
  unsigned a = 100;
  std::cout << a << std::endl;

  return 0;
}

int main() {
  testMethod();

  unsigned u1 = 10;
  unsigned u2 = 20;

  // u1 - u2  = -10
  // 因为 u1 是无符号的，所以在 u1 占四个字节，从后面数
  // std::pow(2, 32) - 10  就是 u1-u2 的值
  // 4294967296-10=4294967286
  std::cout << u1 - u2 << std::endl;

  std::cout << u2 - u1 << std::endl;

  int i = 10;
  int j = 20;

  std::cout << i - j << std::endl;
  std::cout << j - i << std::endl;
  std::cout << i - u1 << std::endl;
  std::cout << u1 - i << std::endl;

  // std::cout << sizeof(u1) << std::endl;
  // std::cout << sizeof(i) << std::endl;

  std::cout << std::fixed << pow(2, 32) << std::endl;

  return 0;
}