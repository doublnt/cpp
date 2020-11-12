#include <iostream>
#include "p186.h"

void print(vector<int>::const_iterator beg, vector<int>::const_iterator end){
	for(;beg != end; ++beg){
		cout << *beg << endl;
	}
}

int main(){
	vector<int> a(10, 2);
	print(a.begin(), a.end());
	return 0;
}
