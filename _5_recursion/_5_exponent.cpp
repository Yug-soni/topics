#include <bits/stdc++.h>

using namespace std;

int exponent(int b, int p) {
  if (p == 0) {
    return 1;
  }
  int result = exponent(b, p / 2);
  return (p & 1) == 0 ? result * result : b * result * result;
}

int main() {
  int b = 2;
  int p = 7;
  int result = exponent(b, p);
  cout << result << "\n";
}
