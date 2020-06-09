#include <iostream>

std::string global_str;
int global_int;

extern std::string global_yinxi_str;

void print_val(int val1, int val2, double val3, double val4) {
  std::cout << "val1:" << val1 << "\tval2:" << val2 << "\tval3:" << val3
            << "\tval4:" << val4 << std::endl;
}
int main() {
  // 8 ½øÖÆ
  int a1 = 07;
  auto b1 = 06;

  std::cout << a1 << std::endl;
  std::cout << b1 << std::endl;

  long double ld = 3.141592654;
  // Error require a narrowing conversion int a{ld};
  // Error int b = {ld};
  int c(ld);
  int d = ld;

  int input_value;
  // std::cin >> input_value;

  // int i{3.14};

  // wage is not define. double salary = wage = 9999.99;

  std::cout << global_str << std::endl;
  std::cout << global_int << std::endl;

  // std::cout << global_yinxi_str << std::endl;

  // int 1_2_3;
  double Double = 1.2;

  int i = 100, sum = 0;

  for (size_t i = 0; i != 10; ++i) {
    sum += i;
  }
  std::cout << sum << std::endl;

  int ival = 10;
  int &refVal = ival;

  std::cout << &refVal << std::endl;
  refVal = 100;

  std::cout << ival << std::endl;

  int int_val1 = 1;
  int &int_ref = int_val1;

  double d_double = 2.0;
  double &d_ref = d_double;

  print_val(int_val1, int_ref, d_double, d_ref);

  d_ref = 3.141;
  print_val(int_val1, int_ref, d_double, d_ref);
  d_ref = int_ref;
  print_val(int_val1, int_ref, d_double, d_ref);
  int_val1 = d_ref;
  print_val(int_val1, int_ref, d_double, d_ref);
  int_ref = d_double;
  print_val(int_val1, int_ref, d_double, d_ref);

  int int_val2, &int_ref2 = int_val2;
  print_val(int_val2, int_ref2, 0, 0);

  int *pointer = nullptr;  // recommend
  int *pointer1 = 0;
  int *pointer2 = NULL;  // not recommend

  std::cout << &pointer << std::endl;
  std::cout << &pointer1 << std::endl;
  std::cout << &pointer2 << std::endl;

  delete pointer;
  delete pointer1;
  delete pointer2;

  double d_value = 1;
  double d_value2 = 2;

  double *pointer_double = &d_value;

  std::cout << *pointer_double << std::endl;

  d_value = 100.00;
  *pointer_double = 100.90;
  std::cout << *pointer_double << std::endl;

  pointer_double = &d_value2;

  std::cout << *pointer_double << std::endl;

  int value = 100;
  const int *int_ptr = &value;
  int const *int_const_ptr = &value;

  std::cout << *int_ptr << std::endl;
}