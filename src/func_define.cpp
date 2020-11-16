#include <iostream>
#include <vector>
using namespace std;

int ve_res(const int a, const int b){
	return a+b;
}

int (*ve)(const int a, const int b) = ve_res;

int main(){
	vector<int> vec(ve(1,2),10);
	return 0;
}
