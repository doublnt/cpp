#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> v(5,1);
	v.push_back(100);
	v.push_back(200);

	cout << "Size:" << v.size() << endl;
	cout << "Capacity:" << v.capacity() << endl;
}
