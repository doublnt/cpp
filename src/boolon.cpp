#include <iostream>
#include<vector>

using namespace std;

size_t get_hash(string str) {
	return std::hash<std::string>{}(str);
}

int main() {
	string str = "10086";
	auto h1 = get_hash(str);
	cout << h1 << endl;

	return 0;
}