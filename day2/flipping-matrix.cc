
#include <bits/stdc++.h>

using namespace std;

/**
 * 112 42 83 119
 * 56 125 56 49
 * 15 78 101 43
 * 62 98 114 108
 *
 *
 * @param matrix
 * @return int
 */
int flipping_matrix(vector<vector<int>> matrix) {
  int flips = (matrix.size() * matrix.size()) / 4,
    n = matrix.size() / 2;
  int sum = 0;
  auto max = [](vector<int> args) noexcept -> int {
    int m = 0;
    for (auto i : args) {
      if (i > m) {
        m = i;
      }
    }
    return m;
  };

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      vector<int> a{
        matrix[i][(2 * n) - j - 1],
        matrix[i][j],
        matrix[(2 * n) - i - 1][j],
        matrix[(2 * n) - i - 1][(2 * n) - j - 1]
      };
      sum += max(a);
    }
  }
  return sum;
}

int main(int argc, char const* argv[]) {

  vector<vector<int>> input{
    {112, 42, 83, 119},
    {56, 125, 56, 49},
    {15, 78, 101, 43},
    {62, 98 ,114, 108},
  };

  cout << flipping_matrix(input);
  return 0;
}
