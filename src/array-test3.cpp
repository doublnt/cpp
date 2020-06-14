#include <iostream>
#include <vector>

using std::cout;
using std::endl;

void p116_343() {
  int int_array[3][4] = {1, 2, 3, 4};
  std::string split_value(10, '-');

  // Version 1
  for (int(&row1)[4] : int_array) {
    for (int &column : row1) {
      cout << column << "\t";
    }
    cout << endl;
  }
  cout << split_value << endl;

  // Version 2
  for (size_t i = 0; i < 3; ++i) {
    for (size_t j = 0; j < 4; ++j) {
      cout << int_array[i][j] << "\t";
    }
    cout << endl;
  }
  cout << split_value << endl;

  // Version 3
  // int(*begin)[4] = int_array;
  // int(*end)[4] = begin + 3;

  for (int (*begin)[4] = std::begin(int_array); begin != std::end(int_array);
       ++begin) {
    for (int *start = std::begin(*begin); start != std::end(*begin); ++start) {
      cout << *start << "\t";
    }
    cout << endl;
  }
  cout << split_value << endl;
}

int main() {
  p116_343();
  return 0;
}