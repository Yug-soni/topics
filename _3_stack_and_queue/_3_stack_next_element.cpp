#include <bits/stdc++.h>

using namespace std;

void printVector(vector<int> v);
void getVector(vector<int> &v, int n);
vector<int> nextLargestElementRight(vector<int> v, int n);
vector<int> nextLargestElementLeft(vector<int> v, int n);
vector<int> nextSmallestElementRight(vector<int> v, int n);
vector<int> nextSmallestElementLeft(vector<int> v, int n);

int main() {

  int n = 4;
  vector<int> v{1, 3, 2, 4};

  vector<int> result = nextLargestElementRight(v, n);
  printVector(result);
  result = nextLargestElementLeft(v, n);
  printVector(result);
  result = nextSmallestElementLeft(v, n);
  printVector(result);
  result = nextSmallestElementRight(v, n);
  printVector(result);

  return 0;
}

void printVector(vector<int> v) {
  cout << "vector : ";
  for (int element : v)
    cout << element << " ";
  cout << "\n";
}

void getVector(vector<int> &v, int n) {
  cout << "Input Vector : ";
  for (int i = 0; i < n; ++i) {
    int element = 0;
    cin >> element;
    v.push_back(element);
  }
}

vector<int> nextLargestElementRight(vector<int> v, int n) {
  vector<int> result;
  stack<int> s;

  for (int i = n - 1; i >= 0; --i) {
    if (s.empty()) {
      result.push_back(-1);
    } else if (s.top() > v[i]) {
      result.push_back(s.top());
    } else {
      while (s.size() > 0 && s.top() <= v[i]) {
        s.pop();
      }
      if (s.size() == 0) {
        result.push_back(-1);
      } else {
        result.push_back(s.top());
      }
    }
    s.push(v[i]);
  }

  reverse(result.begin(), result.end());
  return result;
}

vector<int> nextLargestElementLeft(vector<int> v, int n) {
  vector<int> result;
  stack<int> s;

  for (int i = 0; i < n; ++i) {
    if (s.empty()) {
      result.push_back(-1);
    } else if (s.top() > v[i]) {
      result.push_back(s.top());
    } else {
      while (s.size() > 0 && s.top() <= v[i]) {
        s.pop();
      }
      if (s.size() == 0) {
        result.push_back(-1);
      } else {
        result.push_back(s.top());
      }
    }
    s.push(v[i]);
  }

  return result;
}

vector<int> nextSmallestElementRight(vector<int> v, int n) {
  vector<int> result;
  stack<int> s;

  for (int i = n - 1; i >= 0; --i) {
    if (s.empty()) {
      result.push_back(-1);
    } else if (s.top() < v[i]) {
      result.push_back(s.top());
    } else {
      while (s.size() > 0 && s.top() >= v[i]) {
        s.pop();
      }
      if (s.size() == 0) {
        result.push_back(-1);
      } else {
        result.push_back(s.top());
      }
    }
    s.push(v[i]);
  }

  reverse(result.begin(), result.end());
  return result;
}

vector<int> nextSmallestElementLeft(vector<int> v, int n) {
  vector<int> result;
  stack<int> s;

  for (int i = 0; i < n; ++i) {
    if (s.empty()) {
      result.push_back(-1);
    } else if (s.top() < v[i]) {
      result.push_back(s.top());
    } else {
      while (s.size() > 0 && s.top() >= v[i]) {
        s.pop();
      }
      if (s.size() == 0) {
        result.push_back(-1);
      } else {
        result.push_back(s.top());
      }
    }
    s.push(v[i]);
  }

  return result;
}
