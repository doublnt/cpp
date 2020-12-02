#include <iostream>

#include "BaseDerived.h"

using namespace std;

int main() {
	Base bobj;
	D1 d1obj;
	D2 d2obj;

	Base* bp1 = &bobj, * bp2 = &d1obj, * bp3 = &d2obj;

	bp1->fcn();
	bp2->fcn();
	bp2->fcn();

	D1* d1p = &d1obj, * d2p = &d2obj;

	//bp2->f2(); // error: 'class Base' has no member named 'f2'
	d1p->f2();
	d2p->f2();

	return 0;
}