#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second
#define PB push_back
#define A(X) X.begin(), X.end()

string s;
void solve() {
  cin >> s;
  char mx = 0;
  ll cnt = 0;
  for (auto &i : s) {
    if (mx < i) {
      mx = i;
      cnt = 1;
    } else if (mx == i) {
      cnt++;
    }
  }
  for (ll i = 0; i < cnt; i++) {
    cout << mx;
  }
  cout << "\n";
}
int main() {
  solve();
  return 0;
}
