#include <bits/stdc++.h>

using namespace std;

void print_all_permutations(string input, unsigned int index) {
  if (index == input.size()) {
    cout << input << "\n";
    return;
  }

  for (unsigned int i = index; i < input.size(); ++i) {
    swap(input[index], input[i]);
    print_all_permutations(input, index + 1);

    // backtrack
    swap(input[index], input[i]);
  }
}

int main() {
  string input = "abc";
  unsigned int index = 0;
  print_all_permutations(input, index);
}
