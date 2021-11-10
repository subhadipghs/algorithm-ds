#include <bits/stdc++.h>

using namespace std;

int diagonal_difference(vector<vector<int>> arr) {
  int l = 0, r = 0, mr = arr.size() - 1, ml = 0;

  /**
   *    | 0 1 2 3
   *  ------------
   *  0 | 1 2 3 4
   *  1 | 4 5 6 5
   *  2 | 7 8 9 6
   *  3 | 2 -8 9 +6
   */

  for (int i = 0; i < arr.size(); i++) {
    l += arr[i][i];
    r += arr[ml][mr];
    ml += 1;
    mr -= 1;
  }

  return abs(l - r);
}


int main(int argc, char const* argv[])
{
  vector<vector<int>> a{
    {11, 2, 4},
    {4, 5, 6},
    {10, 8, -12},
  };
  cout << diagonal_difference(a);
  return 0;
}
