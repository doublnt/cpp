#include <iostream>
#include <list>
#include <deque>

int main(){
	std::list<std::deque<int>> value;
	std::cout << value.max_size() << std::endl;
	return 0;
}
