#include <bits/stdc++.h>
using namespace std;

constexpr char nl = '\n';

int main() {
    int a[] = {10, 20, 30, 40};
    int *ptr = a;

    cout << *ptr << nl;
    ptr++;
    cout << *ptr << nl;
    ptr--;
    cout << *ptr << nl;
    return 0;
}