// Comment for duplicated definition.
//#include "YinXi_Base.h"
#include <iostream>
using std::cout;
using std::endl;

void print_array(unsigned *arr, unsigned length) {
  auto end = arr + length;

  while (arr != end) {
    cout << *arr << "\t";
    ++arr;
  }

  cout << endl;
}

void p108_335() {
  unsigned arr[5] = {123, 4, 4, 5};

  auto begin = &arr[0];
  auto end = &arr[5];
  print_array(arr, 5);

  while (begin != end) {
    *begin = 0;
    ++begin;
  }

  /* Write Access Volation
  while (begin != nullptr) {
    *begin = 0;
    ++begin;
  }*/

  print_array(arr, 5);
}

int main() {
  unsigned arr[10] = {1, 2, 3, 4, 5};

  unsigned *p1 = &arr[3];
  unsigned *p2 = &arr[3];

  p1 += p2 - p1;
  cout << *p1 << endl;

  p108_335();

  return 0;
}