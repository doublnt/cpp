#include <iostream>

int main(){
	std::cout << "Input two:" << std::endl;
	int c1, c2;
	std::cin >> c1 >> c2;

	std::cout << "The sum is" << c1+c2 << std::endl;
	int c3;
	while(std::cin >> c3){
		std::cout << c3 << std::endl;
	}
	return 0;
}
