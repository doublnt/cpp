#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void binary_search(vector<unsigned> vector_input, unsigned keyValue) {
  auto begin = vector_input.begin();
  auto end = vector_input.end();
  auto mid = begin + vector_input.size() / 2;

  bool is_found = false;

  while (mid != end && *mid != keyValue) {
    if (*mid > keyValue) {
      begin = mid + 1;
    } else if (*mid < keyValue) {
      end = mid;
    } else {
      cout << *mid << "||" << keyValue << endl;
      is_found = true;
    }

    mid = begin + (end - begin) / 2;
  }

  if (is_found) {
    cout << "It is founded." << endl;
  } else {
    cout << "Err... Not Founded..." << endl;
  }
}

void print_vector(vector<unsigned> vector_param) {
  for (auto item : vector_param) {
    cout << item;
  }
  cout << endl;
}

void print_vector_length(vector<unsigned>::iterator v1,
                         vector<unsigned>::iterator v2) {
  cout << v2 - v1 << endl;
}

void p99_323() {
  vector<unsigned> unsigned_vector1(10, 2);
  auto vector_begin = unsigned_vector1.begin();

  print_vector(unsigned_vector1);

  for (auto vector_begin = unsigned_vector1.begin();
       vector_begin != unsigned_vector1.end(); vector_begin++) {
    *vector_begin = *vector_begin * 2;
  }

  print_vector(unsigned_vector1);

  print_vector_length(unsigned_vector1.begin(), unsigned_vector1.end());
}

int main() {
  string s("hello, lmy");
  if (s.begin() != s.end()) {
    *s.begin() = toupper(*s.begin());
  }

  cout << s << endl;
  p99_323();
  vector<unsigned> binary_vector(100, 2);
  binary_search(binary_vector, 2);
}