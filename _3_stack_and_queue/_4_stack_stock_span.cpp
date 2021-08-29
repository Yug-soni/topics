#include <bits/stdc++.h>

using namespace std;
vector<int> calculateSpan(int price[], int n);

int main() {
  int n = 4;
  int price[] = {1, 3, 2, 4};

  vector<int> r = calculateSpan(price, n);
  cout << "Resultant vector is : ";
  for (int i = 0; i < n; ++i) {
    cout << r[i] << " ";
  }
  cout << "\n";
}

vector<int> calculateSpan(int price[], int n) {
  vector<int> r;
  stack<pair<int, int>> s;

  for (int i = 0; i < n; ++i) {
    if (s.empty()) {
      r.push_back(-1);
    } else if (s.top().first > price[i]) {
      r.push_back(s.top().second);
    } else {
      while (s.size() > 0 && s.top().first <= price[i]) {
        s.pop();
      }
      if (s.size() == 0)
        r.push_back(-1);
      else
        r.push_back(s.top().second);
    }
    s.push({price[i], i});
  }

  for (int i = 0; i < n; ++i) {
    r[i] = i - r[i];
  }

  return r;
}
