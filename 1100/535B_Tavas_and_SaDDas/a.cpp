#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second
#define PB push_back
#define A(X) X.begin(), X.end()

string s;
ll n;
void solve() {
  cin >> s;
  n = s.length();
  ll ans = 0;
  for (ll i = 0; i < n; i++) {
    if (s[i] == '7') {
      ans += (1 << (n - i - 1));
    }
  }
  ans++; // 1-based indexing
  cout << ans + pow(2LL, n) - 2LL << "\n";
}
int main() {
  solve();
  return 0;
}
