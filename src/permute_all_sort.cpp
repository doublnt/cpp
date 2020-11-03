#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> result;
vector<int> path;

bool contains(vector<int> &nums, int key){
	bool result = false;
	for(auto begin = nums.begin(); begin != nums.end(); begin++){
		if(*begin == key){
			return true;
		}
	}
	return false;
}

void backtracing(vector<int> &nums){
	if(path.size() == nums.size()){
		result.push_back(path);
		return;
	}

	for(auto begin = nums.begin(); begin != nums.end(); begin++){
		if(!contains(path, *begin)){
			path.push_back(*begin);
		}else{
			continue;
		}

		backtracing(nums);
		path.pop_back();
	}
}


vector<vector<int>> permute(vector<int> &nums){
	backtracing(nums);

	return result;
}

void print_res(vector<vector<int>> &input){
	for(auto begin1 = input.begin(); begin1 != input.end(); ++begin1){
		cout << "[";
		for(auto begin2 = (*begin1).begin(); begin2 != (*begin1).end(); ++begin2){
			cout << *begin2 << ",";
		}
		cout << "]" << endl;
	}
}

int main(){
	vector<int> n{1,2,3};
	auto res = permute(n);
	print_res(res);
	return 0;
}
