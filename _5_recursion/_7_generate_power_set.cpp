#include <bits/stdc++.h>

using namespace std;

int total_sub_sets = 0;

void generate_power_set(vector<int> input, vector<int> output,
                        unsigned int index) {
  if (index >= input.size()) {
    cout << "{";
    for (unsigned int i = 0; i < output.size(); ++i) {
      cout << output[i] << (i + 1 == output.size() ? "" : ", ");
    }
    cout << "}"
         << "\n";
    ++total_sub_sets;
    return;
  }

  generate_power_set(input, output, index + 1);

  output.push_back(input[index]);
  generate_power_set(input, output, index + 1);
}

int main() {
  vector<int> input;
  vector<int> output;
  unsigned int index = 0;
  input.push_back(1);
  input.push_back(2);
  input.push_back(3);
  input.push_back(4);

  generate_power_set(input, output, index);
  cout << "Total subsets are :- " << total_sub_sets << "\n";
}
