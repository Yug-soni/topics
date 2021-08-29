#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int countSetBits(ll number);

int main() {
  // #ifndef ONLINE_JUDGE
  // freopen("/home/yug/cp/io/input.txt", "r", stdin);
  // freopen("/home/yug/cp/io/output.txt", "w", stdout);
  // #endif
  // ios::sync_with_stdio(0);
  // cin.tie(0);

  int testCases = 0;
  ll number = 0LL;
  int setBits = 0;

  cin >> testCases;

  while (testCases != 0) {
    cin >> number;

    setBits = countSetBits(number - 1);

    if ((setBits & 1) != 0)
      cout << "Louise\n";
    else
      cout << "Richard\n";

    --testCases;
  }
  return 0;
}

int countSetBits(ll number) {
  int c = 0;

  while (number != 0) {
    number &= (number - 1);
    ++c;
  }

  return c;
}
