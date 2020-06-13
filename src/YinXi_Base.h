#ifndef YINXI_BASE_H
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void print_vector_base(vector<unsigned> input_vector) {
  for (auto c : input_vector) {
    cout << c << "\t";
  }
  cout << endl;
}
#endif  // ! YINXI_BASE_H
