#include <iostream>

using namespace std;

int main(){
	int a,b;
	cin >> a >> b;

	try{
		if(0 == b){
			throw invalid_argument("argument b is 0.");
		}
	}catch(invalid_argument err){
		err.what();
		cout << "Retry?" << endl;

	}
	cout << a/b << endl;
	return 0;
}
