#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int i = 0;

  int *const p1 = &i;   // p1 has top-level const, &i has no const
  const int ci = 42;    // we cannot change ci, ci const is top-level
  const int *p2 = &ci;  // p2 has low-level const and can change, &ci has low-level const
  const int *const p3 = p2; // right-most const is top-level, left-most is low-level
  const int &rc = ci;  // const in reference types is always low-level

  return 0;
}