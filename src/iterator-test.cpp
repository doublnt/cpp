#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string s("hello, lmy");
  if (s.begin() != s.end()) {
    *s.begin() = toupper(*s.begin());
  }

  cout << s << endl;
}