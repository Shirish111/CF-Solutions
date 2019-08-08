#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second
#define PB push_back
#define A(X) X.begin(), X.end()

ll n;
void solve() {
  cin>> n;
  cout<< __builtin_popcount(n)<< "\n";
}
int main() {
  solve();
  return 0;
}
