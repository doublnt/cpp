#include <iostream>

#include "i_method.h"
#include "mystery.h"
#include "quadratic.h"
#include "t_string.h"

using namespace std;

int main() {
  /*double root1, root2;
  get_roots(1, 2, 3, root1, root2);
  cout << root1 << "||" << root2 << endl;

  print_npos();

  string a = "marty";
  string b = "stepp";

  mystery(a, b);

  cout << a << "  " << b << endl;

  nameDiamond("Robert");*/

  string a = "if (a(4) > 9) {foo(a(2)); }";

  cout << checkBalance(a) << endl;

  return 0;
}