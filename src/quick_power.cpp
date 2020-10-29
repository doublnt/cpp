#include <iostream>

using namespace std;

double get_pow_value(double x, int n);

double quick_power(double x, int n){
	if( x == 0){
		return 0.0;
	}

	long long N = n;
	double res = 1.0;

	if(N < 0){
		N  = -N;
		x = 1.0 / x;
	}

	while(N > 0){
		if(N % 2 == 1){
			res *= x;
		}

		x*=x;
		N >>= 1;
	}

	return res;
}

double quick_power_recursive(double x, int n){
	if(x == 0){
		return 0.0;
	}

	if(n < 0){
		return 1.0 / get_pow_value(x, -n);
	}

	return get_pow_value(x, n);
}

double get_pow_value(double x, int n){
	long long N = n;

	if(N == 0){
		return 1.0;
	}

	double result = get_pow_value(x, N/2);

	if(N % 2 ==0){
		return result * result;
	}

	return result * result * x;
}

int main(){
	double x = 2;
	int n = -2;
	cout << quick_power(x,n) << endl;
	cout << quick_power_recursive(x,n) << endl;
	return 0;
}
