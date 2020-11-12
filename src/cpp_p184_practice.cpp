#include <iostream>

using namespace std;

int fact(int n){
	int res = n;
	while(--n > 0){
		res *= n;
	}
	
	return res;
}

int main(){
	cout << "Input the n, and return the n fact" << endl;

	int n;

	if(cin >> n){
		cout << "n is" << n << endl;
		cout << fact(n) << endl;
	}else{
		throw invalid_argument("n is invalid.");
	}
}


