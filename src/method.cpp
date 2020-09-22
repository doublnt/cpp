#include <iostream>
#include <stack>

#include "i_method.h"

using namespace std;

int checkBalance(string code) {
  stack<char> currentStack;
  for (size_t i = 0; i < code.size(); ++i) {
    char c = code[i];
    if (c == '(' || c == '{') {
      currentStack.push(c);
    } else if (c == ')') {
      if (!currentStack.empty() && currentStack.top() == '(') {
        currentStack.pop();
      } else {
        return i;
      }
    } else if (c == '}') {
      if (!currentStack.empty() && currentStack.top() == '{') {
        currentStack.pop();
      } else {
        return i;
      }
    }
  }

  if (currentStack.empty()) {
    return -1;
  }

  return currentStack.size();
}