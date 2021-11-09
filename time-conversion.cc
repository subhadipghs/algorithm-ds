// Problem
// ---------
// Given a time in - hour AM / PM format, convert it to military(24 - hour) time.
// Note: -12 : 00 : 00AM on a 12 - hour clock is 00 : 00 : 00 on a 24 - hour clock.
// - 12 : 00 : 00PM on a 12 - hour clock is 12 : 00 : 00 on a 24 - hour clock.

#include <bits/stdc++.h>
using namespace std;


string time_conversion(string s) {
  string token;
  stringstream ss(s);
  vector<string> tokens;

  while (getline(ss, token, ':')) {
    tokens.push_back(token);
  }
  // 12, 00, 00PM
  // take the last one and check whether it's am or pm
  string last = tokens[tokens.size() - 1].substr(2, 3);
  string time_24h;
  int hour = stoi(tokens[0]);
  if (last.compare("PM") == 0) {
    hour = (hour % 12);
    tokens[0] = to_string(hour + 12);
  }
  if (last.compare("AM") == 0) {
    hour = hour >= 12 ? hour - 12 : hour;
    tokens[0] = hour < 11 ? "0" + to_string(hour) : to_string(hour);
  }

  time_24h = tokens[0] + ":" + tokens[1] + ":" + tokens[2].substr(0, 2);
  return time_24h;
}


int main(void) {
  string time;
  cout << "Enter the time: ";
  cin >> time;
  cout << time_conversion(time) << endl;
  return 0;
}