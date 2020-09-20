#include <cmath>

/// <summary>
/// Assumes two real values
/// TODO£ºif / eles on sqrt sign value
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <param name="c"></param>
/// <returns></returns>
void get_roots(int a, int b, int c, double &root1, double &root2) {
  root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * (double)a);
  root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * (double)a);
}