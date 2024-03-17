/*
    Author: Tajwar Saiyeed
    Date: 2024-03-17 14:25:22
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> b(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    vector<ll> merzed;

    ll l = 0, r = 0;

    while (l < n and r < m)
    {
        if (a[l] < b[r] and l < n)
        {
            merzed.push_back(a[l]);
            l++;
        }
        else if (b[r] < a[l] and r < m)
        {
            merzed.push_back(b[r]);
            r++;
        }
        else
        {
            merzed.push_back(a[l]);
            merzed.push_back(b[r]);
            l++;
            r++;
        }
    }

    while (l < n)
    {
        merzed.push_back(a[l]);
        l++;
    }

    while (r < m)
    {
        merzed.push_back(b[r]);
        r++;
    }

    for (ll value : merzed)
    {
        cout << value << " ";
    }

    return 0;
}

// Problem : https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
