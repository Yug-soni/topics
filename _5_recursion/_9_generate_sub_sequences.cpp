#include <bits/stdc++.h>

using namespace std;

void generate_sub_sequences(string input, string output, unsigned int index) {
  if (index == input.size()) {
    cout << output << "\n";
    return;
  }
  generate_sub_sequences(input, output, index + 1);

  output.push_back(input[index]);
  generate_sub_sequences(input, output, index + 1);
}

int main() {
  string input = "abc";
  string output = "";
  unsigned int index = 0;
  generate_sub_sequences(input, output, index);
}
