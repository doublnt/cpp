#include "mystery.h"

void mystery(string a, string& b) {
  a.erase(0, 1);
  b += a[0];
  b.insert(3, "FOO");
}