#include <bits/stdc++.h>

using namespace std;

void printCounting(int n) {
  if (n == 0) {
    return;
  }
  printCounting(n - 1);
  cout << n << " ";
}

void printReverseCounting(int n) {
  if (n == 0) {
    return;
  }
  cout << n << " ";
  printReverseCounting(n - 1);
}

int main() {
  int n = 5;
  printCounting(n);
  cout << "\n";
  printReverseCounting(n);
  cout << "\n";
}
