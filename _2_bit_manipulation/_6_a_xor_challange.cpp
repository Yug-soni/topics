#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll xorChallange(ll number);
int countBits(ll number);

int main() {
  ll C;
  cin >> C;
  cout << xorChallange(C) << "\n";

  return 0;
}

ll xorChallange(ll number) {
  ll result = 0LL;
  ll a = 0LL;
  ll b = 0LL;
  int c = countBits(number);

  --c;
  a = b = 1 << c;
  --b;
  for (int i = 0; i < c; ++i) {
    ll mask = 1 << i;
    if ((mask & number) == 0) {
      a |= mask;
    }
  }

  result = a * b;
  return result;
}

int countBits(ll number) {
  int c = 0;

  while (number != 0) {
    number >>= 1;
    ++c;
  }
  return c;
}
