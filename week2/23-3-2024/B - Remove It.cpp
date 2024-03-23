/*
    Author: Tajwar Saiyeed
    Date: 2024-03-23 19:23:10
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    ll X;
    cin >> X;
    vector<ll> a;
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        if (x != X)
        {
            a.push_back(x);
        }
    }
    for (ll i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

// Problem : https://atcoder.jp/contests/abc191/tasks/abc191_b

// Submission : https://atcoder.jp/contests/abc191/submissions/51603504

// https://vjudge.net/solution/50127789