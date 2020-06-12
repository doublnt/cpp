#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void page94_317() {
  string cin_input;
  vector<string> string_vector_function;
  while (cin >> cin_input) {
    string_vector_function.push_back(cin_input);
  }

  for (auto &item : string_vector_function) {
    for (auto &litter_char : item) {
      litter_char = toupper(litter_char);
    }

    cout << item << endl;
  }
}

int main111() {
  page94_317();

  return 0;
  std::vector<unsigned> unsigned_vector;
  std::vector<std::string> string_vector;
  std::vector<std::vector<long>> long_vector_vector;

  unsigned x = 11;
  std::vector<unsigned> unsigned_vector1(11);
  std::vector<unsigned> unsigned_vector2{11, 22, 33};
  std::vector<unsigned> unsigned_vector3(11, 100);

  std::vector<unsigned> unsigned_vector1_copy = std::vector<unsigned>(x);
  std::vector<unsigned> unsigned_vector2_copy = {11, 22, 33};
  std::vector<unsigned> unsigned_vector3_copy(11);

  std::vector<string> vector_string_1{100};

  vector<unsigned> vector_push;

  for (unsigned i = 0; i < 90; ++i) {
    vector_push.push_back(i);
  }

  for (auto item : vector_push) {
    std::cout << item;
  }
  std::cout << "\n" << vector_push.size() << std::endl;

  string str_input;
  vector<string> str_vector;

  /*while (std::cin >> str_input) {
    str_vector.push_back(str_input);
  }*/

  std::cout << str_input.size() << std::endl;

  vector<unsigned> score_unsigned_vector(11, 0);
  unsigned score;
  while (std::cin >> score) {
    if (score <= 100) {
      ++score_unsigned_vector[score / 10];
    }
  }

  for (auto item : score_unsigned_vector) {
    std::cout << " " << item;
  }

  cout << endl;

  vector<unsigned> vector_string_declare_type;

  for (decltype(vector_string_declare_type.size()) index = 0; index != 100;
       ++index) {
    cout << index << endl;
  }
}