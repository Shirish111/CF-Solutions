#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second
#define PB push_back
#define A(X) X.begin(), X.end()

ll n, k;
ll mid;
void solve() {
  cin >> n >> k;
  while (n) {
    mid = (1LL << (n - 1)); // 2^(n-1)
    if (mid == k) {
      break;
    } else if (k > mid) {
      k -= mid;
    }
    n--;
  }
  cout << n << "\n";
}
int main() {
  solve();
  return 0;
}
