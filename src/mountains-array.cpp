#include <iostream>
#include <vector>

using namespace std;

int get_max_index(vector<int> &arr){
	int max = arr[0];
	unsigned int index = 0;
	int result = 0;

	for(auto begin = arr.begin(); begin != arr.end(); ++begin){
		if(*begin > max){
			result = index;		
			max = *begin;
		}

		index++;
	}

	return result;
}

bool get_result(vector<int> &arr, int index){
	bool result1 = true;
	for(int i = 1; i < index; ++i){
		if(arr[i] <= arr[i-1]){
			result1 = false;
		}
	}

	bool result2 = true;
	for(int i = arr.size()-1; i > index; --i){
		if(arr[i] >= arr[i-1]){
			result2 = false;
		}
	}
	cout << boolalpha << result1 << result2 << endl;
	return result1 & result2;
}

bool is_mountain(vector<int> &arr){
	if(arr.size() < 3){
		return false;
	}

	auto maxIndex = get_max_index(arr);

	return get_result(arr, maxIndex);
}

int main(){
	vector<int> vec{1,2,3,2,1};
	cout << boolalpha << is_mountain(vec) << endl;
	return 0;
}
