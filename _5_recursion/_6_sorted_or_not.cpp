#include <bits/stdc++.h>

using namespace std;

bool sorted_utils(int *a, int n, int i) {
  if (i == n) {
    return true;
  }
  return a[i] >= a[i - 1] ? sorted_utils(a, n, i + 1) : false;
}

bool sorted(int *a, int n) { return n == 1 ? true : sorted_utils(a, n, 1); }

int main() {
  int a[] = {1, 3, 4, 6, 7, 9};
  int n = 6;
  cout << (sorted(a, n) ? "sorted" : "unsorted") << "\n";
}
