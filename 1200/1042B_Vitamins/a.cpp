/**
 * DP Solution
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second
#define PB push_back
#define A(X) X.begin(), X.end()

ll n, c, tmp;
string s;
array<ll, 8> dp;
ll getBitString(string &s) {
  tmp = 0;
  for (auto &i : s) {
    tmp |= (1 << (i - 'A'));
  }
}
void solve() {
  cin >> n;
  fill(A(dp), INT_MAX);
  dp[0] = 0;
  for (ll i = 0; i < n; i++) {
    cin >> c;
    cin.ignore();
    cin >> s;
    getBitString(s);
    for (ll j = 0; j < 8; j++) {
      if (dp[j] != INT_MAX) {
        dp[j | tmp] = min(dp[j | tmp], dp[j] + c);
      }
    }
  }
  if (dp[7] == INT_MAX) {
    dp[7] = -1;
  }
  cout << dp[7] << "\n";
}
int main() {
  solve();
  return 0;
}
