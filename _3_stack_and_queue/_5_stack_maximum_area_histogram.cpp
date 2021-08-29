#include <bits/stdc++.h>

using namespace std;

int getArea(int height[], int n);

int main() {
  int height[] = {6, 2, 5, 4, 5, 1, 6};
  int n = 7;
  int area = getArea(height, n);
  cout << "Area is :- " << area << "\n";
  return 0;
}

int getArea(int height[], int n) {
  int maximumArea = -1;
  vector<int> nsr;
  vector<int> nsl;
  vector<int> l;
  vector<int> area;
  stack<pair<int, int>> s;

  // here we are calculating the index array for the
  // nearest smallest element to right.
  for (int i = n - 1; i >= 0; --i) {
    if (s.empty()) {
      nsr.push_back(n);
    } else if (s.top().first < height[i]) {
      nsr.push_back(s.top().second);
    } else {
      while (s.size() > 0 && s.top().first >= height[i]) {
        s.pop();
      }
      if (s.size() == 0) {
        nsr.push_back(n);
      } else {
        nsr.push_back(s.top().second);
      }
    }
    s.push({height[i], i});
  }

  // Empty the stack.
  while (s.size() != 0) {
    s.pop();
  }

  // reversing the array because we are getting result as reverse.
  reverse(nsr.begin(), nsr.end());

  // here we are calculating the index array for the
  // neares smallest element to left.
  for (int i = 0; i < n; ++i) {
    if (s.empty()) {
      nsl.push_back(-1);
    } else if (s.top().first < height[i]) {
      nsl.push_back(s.top().second);
    } else {
      while (s.size() > 0 && s.top().first >= height[i]) {
        s.pop();
      }
      if (s.size() == 0) {
        nsl.push_back(-1);
      } else {
        nsl.push_back(s.top().second);
      }
    }
    s.push({height[i], i});
  }

  // calculating the length of each possible rectangle.
  for (int i = 0; i < n; ++i) {
    l.push_back(nsr[i] - nsl[i] - 1);
  }

  // calculating the area of the rectangle.
  for (int i = 0; i < n; ++i) {
    area.push_back(l[i] * height[i]);
    cout << area[i] << " ";
  }
  cout << endl;

  // calculating the maximumArea from all of the possible areas.
  for (int i = 0; i < n; ++i) {
    if (area[i] > maximumArea) {
      maximumArea = area[i];
    }
  }

  return maximumArea;
}
