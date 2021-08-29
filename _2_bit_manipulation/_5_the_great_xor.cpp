#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll theGreatXor(ll number);

int main() {
  int testCases = 0;
  ll number = 0LL;
  ll result = 0LL;

  cin >> testCases;

  while (testCases-- != 0) {
    cin >> number;
    result = theGreatXor(number);
    cout << result << "\n";
  }

  return 0;
}

ll theGreatXor(ll number) {
  ll result = 0LL;
  int bitPosition = 0;

  while (number != 0) {
    if ((number & 1LL) == 0) {
      result += (1LL << bitPosition);
    }
    ++bitPosition;
    number >>= 1;
  }

  return result;
}
