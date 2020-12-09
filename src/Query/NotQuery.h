class NotQuery :public Query_base {
	friend Query operator~(const Query&);
	NotQuery(cosnt Query& q) :query(q) {}
	std::string rep() const { return "~(" + query.rep() + ")"; }
	Query query;
	QueryResult eval(const TextQuery&) const;
};

inline Query operator~(const Query& operand) {
	return std::shared_ptr<Query_base>(new NotQuery(operand));
}