#include <bits/stdc++.h>

using namespace std;

int main() {
  int testCases = 0;
  int vecLength = 0;
  vector<int> vec;
  int number = 0;
  int result = 0;

  cin >> testCases;

  while (testCases != 0) {
    cin >> vecLength;

    result = 0;

    for (int i = 0; i < vecLength; ++i) {
      cin >> number;
      vec.push_back(number);
    }

    if ((vecLength & 1) != 0) {
      for (int i = 0; i < vecLength; ++i, ++i) {
        result ^= vec[i];
      }
    }
    cout << result << "\n";

    vec.clear();
    --testCases;
  }

  return 0;
}
