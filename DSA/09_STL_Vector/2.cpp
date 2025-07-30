#include <bits/stdc++.h>
using namespace std;

constexpr char nl = '\n';

void f1(vector<int> &v)
{
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << nl;
}

int main()
{
    vector<int> v;

    v.push_back(19);
    v.push_back(43);
    v.push_back(30);
    v.push_back(23);
    v.push_back(30);
    v.push_back(54);
    v.push_back(12);

    v.insert(v.begin() + 1, 20);
    // f1(v);

    // v.erase(v.begin() + 1);
    // f1(v);

    // v.erase(v.begin(), v.begin()+2);
    // f1(v);

    // v.clear();
    // f1(v);

    // vector<int>::iterator it;
    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << ' ';
    // }

    sort(v.begin(), v.end());
    f1(v);

    reverse(v.begin(), v.end());
    f1(v);

    auto it = find(v.begin(), v.end(), 23);
    if (it != v.end())
    {
        cout << it - v.begin() << nl;
    }

    // uniquw value
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    f1(v);

    return 0;
}