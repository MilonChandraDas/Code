#include <bits/stdc++.h>
using namespace std;
constexpr char nl = '\n';

int main() {
    int n;
    cin >> n;
    int space = n-1;
    int star = 1;

    for (int i = 1; i <= (2*n)-1; i++) {
        for (int j = 1; j <= space; j++) cout << " ";
        for (int j = 1; j <= star; j++) cout << "*";
        cout << nl;
        if (i < n) {
            space--;
            star+=2;
        }
        else {
            space++;
            star-=2;
        }
    }
    return 0;
}