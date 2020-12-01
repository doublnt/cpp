#include <iostream>

using namespace std;

class Quote {
public:
	Quote() = default;
	Quote(const string& book, double sales_price) :bookNo(book), price(sales_price) {}
	string isbn() const { return bookNo; }
	virtual double net_price(size_t n) const {
		return n * price;
	}
	virtual ~Quote() = default; // 对析构函数进行动态绑定
	virtual void debug() {
		cout << "private string bookNO" << " protected double price" << endl;
	}
private:
	string bookNo;
protected:
	double price = 0.0;
};


class Bulk_quote :public Quote {
public:
	Bulk_quote() = default;
	Bulk_quote(const string& book, double p, size_t qty, double disc) : Quote(book, p), min_qty(qty), discount(disc) {}
	double net_price(size_t n) const override;
	void debug() override{
		cout << "private size_t qty" << " private double discount" << endl;
	}
private:
	size_t min_qty = 0;
	double discount = 0.0;
};

double Bulk_quote::net_price(size_t n) const {
	if (n >= min_qty) {
		return n * (1 - discount) * price;
	}
	else {
		return n * price;
	}
}

double print_total(ostream& os, const Quote& item, size_t n) {
	double ret = item.net_price(n);

	os << "ISBN: " << item.isbn() <<
		" # sold: " << n <<
		" total due: " << ret << endl;

	return ret;
}