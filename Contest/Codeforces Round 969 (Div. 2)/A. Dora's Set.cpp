/*
    Author: Tajwar Saiyeed
    Date: 2024-08-30 21:18:28
    File: A. Dora's Set.cpp
*/
#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int l, r;
    cin >> l >> r;

    if (l % 2 == 1)
        l--;
    if (r % 2 == 1)
        r++;
    cout << (r - l) / 4 << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}

// Problem : https://codeforces.com/contest/2007/problem/A