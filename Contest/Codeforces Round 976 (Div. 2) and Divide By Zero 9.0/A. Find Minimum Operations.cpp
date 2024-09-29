/*
    Author: Tajwar Saiyeed
    Date: 2024-09-29 21:40:11
    File: A. Find Minimum Operations.cpp
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, k;
    cin >> n >> k;
    int op = 0;

    if (k == 1)
    {
        cout << n << endl;
        return;
    }

    while (n > 0)
    {
        op += n % k;
        n /= k;
    }
    cout << op << endl;
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

// Problem : https://codeforces.com/contest/2020/problem/A