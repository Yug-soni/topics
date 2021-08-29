#include <bits/stdc++.h>

using namespace std;

int v[100][100];

void ways_before_utils() {
  for (int i = 0; i < 100; ++i) {
    for (int j = 0; j < 100; ++j) {
      v[i][j] = 0;
    }
  }
}

void ways_after_utils() {
  for (int i = 0; i < 100; ++i) {
    for (int j = 0; j < 100; ++j) {
      cout << v[i][j] << " ";
    }
    cout << "\n";
  }
}

int ways(int si, int sj, int di, int dj, int mi, int mj) {
  if (si < 0 || sj < 0 || si >= mi || sj >= mj || v[si][sj] == 1) {
    return 0;
  } else if (si == di && sj == dj) {
    return 1;
  }

  v[si][sj] = 1;
  int result =
      ways(si + 1, sj, di, dj, mi, mj) + ways(si, sj + 1, di, dj, mi, mj) +
      ways(si - 1, sj, di, dj, mi, mj) + ways(si, sj - 1, di, dj, mi, mj);

  v[si][sj] = 0;
  return result;
}

int main() {
  int si = 0;
  int sj = 0;
  int di = 1;
  int dj = 1;
  int mi = 2;
  int mj = 2;

  ways_before_utils();
  int result = ways(si, sj, di, dj, mi, mj);

  cout << "Total number of ways are :- " << result << "\n";
}
