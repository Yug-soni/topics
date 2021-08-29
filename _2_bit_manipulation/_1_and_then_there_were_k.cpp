#include <bits/stdc++.h>

using namespace std;

int maximumk(int number);

int main() {
  int testCases = 0;
  int number = 0;
  int result = 0;

  cin >> testCases;
  while (testCases != 0) {
    cin >> number;
    result = maximumk(number);

    cout << result << "\n";
    --testCases;
  }

  return 0;
}

int maximumk(int number) {
  int result = 0;

  while (number != 0) {
    number >>= 1;
    ++result;
  }

  result = 1 << --result;
  --result;
  return result;
}
