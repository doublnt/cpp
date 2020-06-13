#include "YinXi_Base.h"

int main() {
  // unsigned unsigned_array[1] = {1, 2}; too many to initialized
  unsigned unsigend_array2[2] = {2};

  constexpr unsigned length = 10;

  unsigned a[length];

  for (size_t i = 0; i < length; ++i) {
    a[i] = i;
  }

  for (size_t i = 0; i < length; i++) {
    cout << a[i];
  }
  cout << endl;

  unsigned b[length];

  for (size_t i = 0; i < length; i++) {
    b[i] = a[i];
  }

  vector<unsigned> unsigned_vector(10, 0);

  unsigned count = 0;
  for (auto &item : unsigned_vector) {
    item = 10 * count++;
  }
  print_vector_base(unsigned_vector);

  count = 0;
  for (auto begin = unsigned_vector.begin(); begin != unsigned_vector.end();
       ++begin) {
    *begin = count++;
  }
  print_vector_base(unsigned_vector);

  vector<unsigned> unsigned_vector2;

  unsigned_vector2 = unsigned_vector;

  print_vector_base(unsigned_vector);
  print_vector_base(unsigned_vector2);

  unsigned score[11];
  unsigned grade;

  while (cin >> grade) {
    if (grade <= 100) {
      ++score[grade / 10];
    }
  }

  for (size_t i = 0; i < 10; ++i) {
    cout << score[i] << "\t";
  }
  cout << endl;
}