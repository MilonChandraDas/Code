#include <bits/stdc++.h>
using namespace std;
constexpr char nl = '\n';

int main() {
    int n;
    cin >> n;
    int a[n+1];

    for (int i = 0; i < n; i++) cin >> a[i];

    int idx, val;
    cin >> idx >> val;

    for (int i = n-1; i >= idx; i--) {
        a[i+1] = a[i];
    }
    a[idx] = val;

    for (auto i : a) cout << i << " ";
    return 0;
}