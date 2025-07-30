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
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;

    int cnt = 0;
    bool done = false;

    for (int i = 1; i <= 10; i++) {
        if (x.find(s) != -1) {
            done = true;
            break;
        }
        else {
            cnt++;
            x += x;
        }
    }

    if (done) cout << cnt << nl;
    else cout << "-1" << nl;
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