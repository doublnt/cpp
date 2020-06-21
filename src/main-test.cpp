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

const string& short_string(const string& val1, const string& val2) {
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

const string& short_string(string& s1, string& s2) {
  auto& r = short_string(const_cast<const string&>(s1),
                         const_cast<const string&>(s2));

  return const_cast<string&>(r);
}

inline string& short_string_v2(string& s1, string& s2) {
  return s1.size() <= s2.size() ? s1 : s2;
}

constexpr int get_const_expr() { return 12; }

void pre_define() {
  cout << __FILE__ << endl;
  cout << __LINE__ << endl;
  cout << __TIME__ << endl;
  cout << __DATE__ << endl;
}

void array_test1() {
  int array[] = {1, 2, 3, 4, 5};
  unsigned index = 1;

  cout << get(array, index) << endl;

  int ia[10];

  for (unsigned i = 0; i != 10; ++i) {
    get(ia, i) = i;
  }

  cout << ia[2] << endl;

  // cout << reture_demo() << endl;
}

int main() {
  error_msg({"Error Message", "Okay Message"});

  pre_define();

  return 0;
}