#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll andProduct(ll a, ll b);
int countBits(ll number);

int main() {
  int testCases = 0;
  ll a = 0LL, b = 0LL;
  ll result = 0LL;

  cin >> testCases;

  while (testCases != 0) {
    cin >> a >> b;

    result = andProduct(a, b);
    cout << result << "\n";

    --testCases;
  }

  return 0;
}

ll andProduct(ll a, ll b) { return a & ~((1 << (int)log2(a ^ b)) - 1); }
