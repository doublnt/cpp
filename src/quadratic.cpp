/// Çó¸ùËã·¨

#include <cmath>
#include <iostream>

using namespace std;

void give_some_parameters(double &a, double &b, double &c) {
  cout << "Input a, b, c" << endl;
  cin >> a;
  cin >> b;
  cin >> c;
}

struct quadratic_root {
  double x1;
  double x2;
};

/// <summary>
/// Assumes two real values
/// TODO£ºif / eles on sqrt sign value
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <param name="c"></param>
/// <returns></returns>
quadratic_root get_roots(double a, double b, double c) {
  quadratic_root qr;
  qr.x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
  qr.x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

  return qr;
}

int main() {
  double a, b, c;
  give_some_parameters(a, b, c);

  auto result = get_roots(a, b, c);

  cout << "The First root is " << result.x1 << endl;
  cout << "The Second root is " << result.x2 << endl;

  return 0;
}