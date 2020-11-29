#include <memory>
#include <iostream>

using namespace std;

int main() {
	shared_ptr<string> p1 = make_shared<string>("Hello.");

	if (p1 && p1->empty()) {
		*p1 = "hello, world.";
	}
	shared_ptr<int> p1_int = make_shared<int>(32);
	shared_ptr<int> p1_int2 = make_shared<int>(10, 1);

	unique_ptr<string> p2 = make_unique<string>("World.");

	cout << "p1 value is:" << *p1 << endl;
	return 0;
}
