// Problem statement
// ------------------
// Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. 
// Then print the respective minimum and maximum values as a single line of two space-separated long integers.

#include <bits/stdc++.h>

using namespace std;

void min_max_sum(vector<int> arr) {
  long long int total_sum = 0, max = 0, min = INT_MAX;
  for (int i = 0; i < arr.size(); i++) {
    total_sum += arr[i];

    if (arr[i] > max) {
      max = arr[i];
    }

    if (arr[i] < min) {
      min = arr[i];
    }
  }
  cout << total_sum - max << " " << total_sum - min;
}

int main(void) {
  vector<int> a{ 1, 2, 3, 4, 5 };
  min_max_sum(a);
  return 0;
}