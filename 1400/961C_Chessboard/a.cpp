#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second
#define PB push_back
#define A(X) X.begin(), X.end()
#define F(I, X) for(ll I = 0; I < X; I++)

ll n;
array<vector<string>, 4> a;
array<array<ll, 2>, 4> c;
ll count_c(ll v, bool color) {
  ll cnt = 0;
  F(i, n) {
    F(j, n) {
      if(a[v][i][j] - '0' != color) {
	cnt++;
      }
      color = !color;
    }
  }
  return cnt;
}
ll sm(bool color, ll a, ll b, ll c1, ll d) {
  return c[a][color] + c[b][!color] + c[c1][color] + c[d][!color];
}
ll cl(bool color) {
  return min(sm(color, 0, 2, 1, 3), min(sm(color, 0, 1, 2, 3), sm(color, 0, 1, 3, 2)));
}
ll diff_c(bool color) {
  return min(cl(color), cl(!color));
}
void preprocess() {
  F(i, 4) {
    c[i][0] = count_c(i, 0);
    c[i][1] = count_c(i, 1);
  }
}
void process() {
  preprocess();
  ll mn = INT_MAX;
  mn = min(diff_c(0), diff_c(1));
  cout<< mn<< "\n";
}
void solve() {
  cin>> n;
  cin.ignore();
  F(i, 4) {
    a[i].resize(n);
    F(j, n) {
      cin>> a[i][j];
    }
  }
  process();
}
int main() {
  solve();
  return 0;
}
