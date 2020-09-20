#include "t_string.h"

#include <iostream>

using namespace std;

void print_npos() {
  string a = "111";
  cout << string::npos << endl;
}

void nameDiamond(string s) {
  for (auto i = 0; i < s.size(); ++i) {
    for (auto j = 0; j <= i; ++j) {
      cout << s[j];
    }
    cout << endl;
  }

  for (auto j = 1; j < s.size(); ++j) {
    for (int k = 0; k < j; ++k) {
      cout << " ";
    }

    for (int i = j; i < s.size(); ++i) {
      cout << s[i];
    }
    cout << endl;
  }
}