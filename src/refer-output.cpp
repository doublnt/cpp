#include <iostream>
using namespace std;

int main(){
	int a = 12;
	cout<<a<<endl;
	cout << "a address:" << &a << endl;

	int& b = a;
	cout << *(&b) << endl;


	int* c = &a;
	cout << "pointer c address:" << c << endl;
	cout << "pointer c value:" << *c << endl;

	cout << "The addresss is equal?" << (&a == &(*c)) << endl;
	return 0;
}
