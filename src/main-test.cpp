#include <iostream>
#include <string>

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

int main() {
  error_msg({"Error Message", "Okay Message"});
  return 0;
}