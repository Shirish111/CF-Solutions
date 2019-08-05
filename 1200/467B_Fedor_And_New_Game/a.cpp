#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second
#define PB push_back
#define A(X) X.begin(), X.end()

ll n, m, k, tmp;
array<ll, 1002> a;
void solve() {
  cin >> n >> m >> k;
  for (ll i = 0; i < m + 1; i++) {
    cin >> a[i];
  }
  ll cnt = 0;
  for (ll i = 0; i < m; i++) {
    a[i] = a[i] ^ a[m];
    if (__builtin_popcount(a[i]) <= k) {
      cnt++;
    }
  }
  cout << cnt << "\n";
}
int main() {
  solve();
  return 0;
}
