// cSpell:disable

#include <bits/stdc++.h>

using namespace std;

#define iumap unordered_map<int, int>
#define iumap_it unordered_map<int, int>::iterator



int lonely_integer(vector<int> a) {
  unordered_map<int, int> index;

  for (auto n : a) {
    index.at(n) += +1;
  }

  for (unordered_map<int, int>::iterator i = index.begin(); i != index.end(); i++) {
    if (i->second <= 1) {
      return i->first;
    }
  }
  return -1;
}


int main(void) {
  vector<int> a{ 1, 1, 3, 3, 4, 5, 5 };
  cout << lonely_integer(a) << endl;
  return 0;
}