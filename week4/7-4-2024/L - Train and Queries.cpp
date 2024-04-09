/*
    Author: Tajwar Saiyeed
    Date: 2024-04-07 23:08:19
    File: L - Train and Queries.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define p1 cout << '1'
#define p0 cout << '0'
#define nl cout << '\n'
#define vll vector<ll>
#define vi vector<int>
#define vs vector<string>
#define fr(i, ivalue, n) for (int i = ivalue; i < n; i++)
#define nfr(i, ivalue, n) for (int i = ivalue; i > n; i--)
#define srtG(vll) sort(a.begin(), a.end(), greater<ll>())
#define mps map<string, int>
#define mpi map<int, int>
#define mpiv map<int, vi>
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, q;
        cin >> n >> q;

        vll a(n);
        mpiv mp;
        fr(i, 0, n)
        {
            cin >> a[i];
            mp[a[i]].push_back(i);
        }

        while (q--)
        {
            ll x, y;
            cin >> x >> y;
            if (mp[x].size() == 0 or mp[y].size() == 0)
            {
                no;
                continue;
            }
            else if (mp[x].front() < mp[y].back())
            {
                yes;
                continue;
            }
            else
            {
                no;
                continue;
            }
        }
    }
    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1702/C
// Submission : https://vjudge.net/solution/50539311