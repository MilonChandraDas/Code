#include <bits/stdc++.h>
using namespace std;

constexpr char nl = '\n';

int main()
{
    int val = 10;
    int *ptr = &val;

    cout << ptr << " " << &val << nl;
    cout << *ptr << " " << val << nl;

    int **ptr2 = &ptr;
    cout << ptr2 << " " << &ptr << nl;
    cout << **ptr2 << " " << *ptr << nl;

    **ptr2 = 50;
    cout << val << nl;

    return 0;
}