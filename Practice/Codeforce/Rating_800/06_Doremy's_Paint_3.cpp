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
    map<int, int> m;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        m[a]++;
    }

    bool done = 0;
    if (m.size() == 1) done = 1;
    else if (m.size() == 2) {
        auto f1 = m.begin();
        auto f2 = m.begin();
        f2++;

        if (f1->second == f2->second) done = 1;
        else if (abs(f1->second - f2->second) == 1) done = 1;
    }
    if (done) yes;
    else no;
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