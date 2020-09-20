#include "t_string.h"

#include <iostream>

using namespace std;

void print_npos() {
  string a = "111";
  cout << string::npos << endl;
}

void nameDiamond(string s) {
  /*for (auto i = 0; i < s.size(); ++i) {
    for (auto j = 0; j <= i; ++j) {
      cout << s[j];
    }
    cout << endl;
  }*/

  for (size_t i = 0; i < s.length(); ++i) {
    cout << s.substr(0, i + 1) << endl;
  }

  for (size_t j = 1; j < s.length(); ++j) {
    for (size_t k = 0; k < j; ++k) {
      cout << " ";
    }
    cout << s.substr(j) << endl;
  }
}