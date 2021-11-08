// Problem:
// -------------------
// Given five positive integers, find the minimumand maximum values that can be calculated by summing exactly four of the five integers.
// Then print the respective minimumand maximum values as a single line of two space - separated long integers.

#include <iostream>
#include <iomanip>
#include <vector>


void plus_minus(std::vector<int>& arr) {
  double plus_count = 0, minus_count = 0, zero_count = 0;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] > 0) {
      plus_count += 1;
    }
    if (arr[i] < 0) {
      minus_count += 1;
    }
    if (arr[i] == 0) {
      zero_count += 1;
    }
  }
  std::cout << std::fixed << std::setprecision(6) << plus_count / arr.size() << std::endl;
  std::cout << std::fixed << std::setprecision(6) << minus_count / arr.size() << std::endl;
  std::cout << std::fixed << std::setprecision(6) << zero_count / arr.size() << std::endl;
}


int main(void) {
  std::vector<int> a{ 10, -1, 2, -3, 0 };
  plus_minus(a);
  return 0;
}