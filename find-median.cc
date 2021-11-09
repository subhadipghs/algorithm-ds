#include <bits/stdc++.h>
using namespace std;


int find_median(vector<int> arr) {
  int ans;
  sort(arr.begin(), arr.end());
  if (arr.size() % 2 == 0) {
    int mid = arr.size() / 2 - 1;
    ans = (arr[mid] + arr[mid + 1]) / 2;
  } else {
    ans = arr[arr.size() / 2];
  }
  return ans;
}


int main() {
  vector<int> a{ 0, 1, 4, 32, 53, 3 };
  cout << find_median(a) << endl;
  return 0;
}