#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr int MOD = 1e9 + 7;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define fraction() cout << fixed << setprecision(10)
#define ff cout << "First" << nl
#define ss cout << "Second" << nl

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b) {
        if (c % 2 == 0) ss;
        else ff;
    }
    else if(a > b) ff;
    else ss;
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}