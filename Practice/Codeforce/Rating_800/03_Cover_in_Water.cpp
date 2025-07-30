#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr int MOD = 1e9 + 7;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define fraction() cout << fixed << setprecision(10)
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 1; i < n-1; i++) {
        if (s[i-1] == '.' && s[i] == '.' && s[i+1] == '.') {
            cout << 2 << nl;
            return;
        }
    }
    int cnt = count(s.begin(), s.end(), '.');
    cout << cnt << nl;
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