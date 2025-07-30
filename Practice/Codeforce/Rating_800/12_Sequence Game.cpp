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
    vector<int> v(n), a;

    for (int i = 0; i < n; i++) cin >> v[i];

    a.push_back(v[0]);
    for (int i = 1; i < n; i++) {
        if (v[i-1] > v[i]) {
            a.push_back(1);
            a.push_back(v[i]);
        }
    else a.push_back(v[i]);
    }
    
    cout << a.size() << nl;
    for (int i = 0; i < a.size(); i++) cout << a[i] << " ";
    cout << nl;
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