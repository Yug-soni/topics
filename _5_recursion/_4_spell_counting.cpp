#include <bits/stdc++.h>

using namespace std;

void spellUtils(int n) {
  if (n == 0) {
    cout << "ZERO ";
  } else if (n == 1) {
    cout << "ONE ";
  } else if (n == 2) {
    cout << "TWO ";
  } else if (n == 3) {
    cout << "THREE ";
  } else if (n == 4) {
    cout << "FOUR ";
  } else if (n == 5) {
    cout << "FIVE ";
  } else if (n == 6) {
    cout << "SIX ";
  } else if (n == 7) {
    cout << "SEVEN ";
  } else if (n == 8) {
    cout << "EIGHT ";
  } else {
    cout << "NINE ";
  }
}
void spellCouting(int n) {
  if (n == 0) {
    return;
  }
  spellCouting(n / 10);
  spellUtils(n % 10);
}

int main() {
  int n = 435840237;
  spellCouting(n);
  cout << "\n";
}
