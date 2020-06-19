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

int main() {
  error_msg({"Error Message", "Okay Message"});

  cout << reture_demo() << endl;
  return 0;
}