#include <iostream>
#include <stack>
#include <queue>

#include "i_method.h"

using namespace std;

int checkBalance(string code) {
	stack<char> currentStack;
	for (size_t i = 0; i < code.size(); ++i) {
		char c = code[i];
		if (c == '(' || c == '{') {
			currentStack.push(c);
		}
		else if (c == ')') {
			if (!currentStack.empty() && currentStack.top() == '(') {
				currentStack.pop();
			}
			else {
				return i;
			}
		}
		else if (c == '}') {
			if (!currentStack.empty() && currentStack.top() == '{') {
				currentStack.pop();
			}
			else {
				return i;
			}
		}
	}

	if (currentStack.empty()) {
		return -1;
	}

	return currentStack.size();
}

void reverseQueue(queue<string>& c_queue)
{
	stack<string> stack;
	int size = c_queue.size();

	for (int i = 0; i < size; ++i)
	{
		string a = c_queue.front();
		c_queue.pop();
		stack.push(a);
		c_queue.push(a);
	}

	for (int i = 0; i < size; ++i)
	{
		c_queue.push(stack.top());
		stack.pop();
	}
}

int factorial(int n) {
	if (n > 1) {
		return n * factorial(n - 1);
	}
	else {
		return 1;
	}
}

bool recursiveString(string str) {
	if (str.length() <= 1)
	{
		return false;
	}

	char c = str[0];
	char c_last = str[str.length() - 1];
	string middle = str.substr(1, str.length() - 2);

	if (c != c_last)
	{
		return false;
	}

	if (c == c_last && recursiveString(middle))
	{
		return true;
	}

	return false;
}