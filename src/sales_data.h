class sales_data{
	friend sales_data add(const sales_data&, const sales_data&);
	friend std::istream &read(std::istream&, sales_data&);
	friend std::ostream &print(std::ostream&, const sales_data&);

	public:
		sales_data() = default;
		sales_data(const std::string &s, unsigned n, double p):bookNo(s),units_sold(n),revenue(p*n){}
		sales_data(const std::string &s):bookNo(s){}
		sales_data(std::istream&);
		std::string isbn() const { return bookNo; }
		sales_data &combine(const sales_data&);
	private:
		double avg_price() const { return units_sold ? revenue/units_sold : 0; }
		std::string bookNo;
		unsigned units_sold = 0;
		double revenue = 0.0;
};

sales_data add(const sales_data&, const sales_data&);
std::istream &read(std::istream&, sales_data&);
std::ostream &print(std::ostream&, const sales_data&);
