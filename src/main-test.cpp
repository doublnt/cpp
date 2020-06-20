#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void error_msg(std::initializer_list<string> li) {
  for (auto begin = li.begin(); begin != li.end(); ++begin) {
    cout << *begin << " ";
  }

  cout << endl;
}

int reture_demo() {
  std::vector<int> vector_int(10, 0);
  for (auto item = vector_int.begin(); item != vector_int.end(); ++item) {
    cout << *item << endl;

    return 11;
  }

  return 22;
}

const string& return_reference_string_type(const string& val1,
                                           const string& val2) {
  return val1.size() > val2.size() ? val1 : val2;
}

int function_status() {
  if (1 == 1)
    return EXIT_SUCCESS;
  else
    return EXIT_FAILURE;
}

bool str_subrange(const string& str1, const string& str2) {
  if (str1.size() == str2.size()) return str1 == str2;

  auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();

  // Should return value
  // for (decltype(size) i = 0; i != size; ++i) {
  //  if (str1[i] != str2[i]) return;
  //}
}

int& get(int* array, int index) { return array[index]; }

int main() {
  error_msg({"Error Message", "Okay Message"});

  int array[] = {1, 2, 3, 4, 5};
  unsigned index = 1;

  cout << get(array, index) << endl;

  int ia[10];

  for (unsigned i = 0; i != 10; ++i) {
    get(ia, i) = i;
  }

  cout << ia[2] << endl;

  //cout << reture_demo() << endl;
  return 0;
}