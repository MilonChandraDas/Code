#include <bits/stdc++.h>
using namespace std;
constexpr char nl = '\n';

int main() {
    int n;
    cin >> n;
    int k = 1, s = n-1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= s; j++) cout << ' ';
        for (int j = 1; j <= k; j++) cout << "*";
        cout << nl;
        k += 2;
        s--;
    }
    return 0;
}