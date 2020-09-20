#include <iostream>

#include "mystery.h"
#include "quadratic.h"
#include "t_string.h"

using namespace std;

int main() {
  double root1, root2;
  get_roots(1, 2, 3, root1, root2);
  cout << root1 << "||" << root2 << endl;

  print_npos();

  string a = "marty";
  string b = "stepp";

  mystery(a, b);

  cout << a << "  " << b << endl;

  nameDiamond("Robert");

  return 0;
}