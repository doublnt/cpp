#include <iostream>
#include <vector>
#include <typeinfo>

using namespace std;

vector<vector<string>> result;
vector<string> path;

bool isPalindrome(const string &s, int start, int end)
{
	for (int i = start, j = end; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return false;
		}
	}
	return true;
}

void backTracking(const string &s, int startIndex)
{
	if (startIndex >= s.size())
	{
		result.push_back(path);
		return;
	}

	for (int i = startIndex; i < s.size(); ++i)
	{
		if (isPalindrome(s, startIndex, i))
		{
			string str = s.substr(startIndex, i - startIndex + 1);
			path.push_back(str);
		}
		else
		{
			continue;
		}
		backTracking(s, i + 1);
		path.pop_back();
	}
}

vector<vector<string>> partition(string s)
{
	result.clear();
	path.clear();
	backTracking(s, 0);

	return result;
}

int main()
{
	string s = "ssa";
	auto res = partition(s);

	for (auto begin = res[0].begin(); begin != res[0].end(); ++begin)
	{
		cout << &(begin[0]) << endl;
	}

	return 0;
}
