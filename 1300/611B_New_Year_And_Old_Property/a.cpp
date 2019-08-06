#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second
#define PB push_back
#define A(X) X.begin(), X.end()

ll l, h, cnt;
ll lc, hc;
ll get_msb_set_index(ll n) { return sizeof(n) * 8LL - __builtin_clzll(n); }
void boundary(ll n_bits) {
  ll num = (1LL << n_bits) - 1LL;
  ll tmp;
  for (ll i = 0; i < n_bits - 1LL; i++) {
    tmp = num & ~(1LL << i);
    if (tmp >= l && tmp <= h) {
      cnt++;
    }
  }
}
void boundary_case() {
  boundary(lc);
  if (hc > lc) {
    boundary(hc);
  }
}
void intermediate_case() {
  ll first = lc;
  ll last = hc - 2LL;
  if (first > last) {
    return;
  }
  ll n = last - first + 1LL;
  cnt += n * (2LL * first + n - 1LL) / 2LL;
}
ll process() {
  boundary_case();
  intermediate_case();
  return cnt;
}
void solve() {
  cnt = 0;
  cin >> l >> h;
  lc = get_msb_set_index(l);
  hc = get_msb_set_index(h);
  cout << process() << "\n";
}
int main() {
  solve();
  return 0;
}
