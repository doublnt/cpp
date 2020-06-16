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

  for (int(*begin)[4] = std::begin(int_array); begin != std::end(int_array);
       ++begin) {
    for (int *start = std::begin(*begin); start != std::end(*begin); ++start) {
      cout << *start << "\t";
    }
    cout << endl;
  }
  cout << split_value << endl;
}

void array_pointer_test() {
  int a[5] = {1, 2, 3, 4};

  int *p = a;
  cout << *p << endl;  //
  cout << &p << endl;

  int *p1 = p + 4;
  cout << *p1 << endl;  //
  cout << &p1 << endl;

  int *p2 = p + 10;
  cout << *p2 << endl;
  cout << &p2 << endl;
}

int return_bigger_one(const int value, const int *p_value) {
  if (value > *p_value) {
    return value;
  } else {
    return *p_value;
  }
}

int main444() {
  // p116_343();
  // array_pointer_test();
  int value = 100;
  const int *pointer1 = &value;
  cout << return_bigger_one(100, pointer1) << endl;

  return 0;
}