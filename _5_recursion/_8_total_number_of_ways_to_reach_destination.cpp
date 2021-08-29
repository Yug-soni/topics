#include <bits/stdc++.h>

using namespace std;

int total_ways(int n) {
  if (n <= 0) {
    return n == 0 ? 1 : 0;
  }

  return total_ways(n - 1) + total_ways(n - 2) + total_ways(n - 3);
}

int main() {
  int n = 4;
  cout << "TOTAL NUMBER OF WAYS TO REACH THE DESTINATION :- " << total_ways(n)
       << "\n";
}
