#include <iostream>

#include "quadratic.h"
#include "t_string.h"

using namespace std;

int main() {
  double root1, root2;
  get_roots(1, 2, 3, root1, root2);
  cout << root1 << "||" << root2 << endl;

  print_npos();

  return 0;
}