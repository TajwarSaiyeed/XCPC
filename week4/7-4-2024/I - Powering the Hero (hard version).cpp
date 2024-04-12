/*
    Author: Tajwar Saiyeed
    Date: 2024-04-07 23:08:15
    File : I - Powering the Hero (hard version).cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl cout << '\n'
#define vll vector<ll>
#define vi vector<int>
#define fr(i, ivalue, n) for (int i = ivalue; i < n; i++)
#define nfr(i, ivalue, n) for (int i = ivalue; i > n; i--)
#define srtG(vll) sort(a.begin(), a.end(), greater<ll>())
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, ans = 0;
        cin >> n;
        vll a;
        priority_queue<ll> pq;
        fr(i, 0, n)
        {
            ll x;
            cin >> x;
            a.push_back(x);
        }

        fr(i, 0, n)
        {
            if (a[i] != 0)
            {
                pq.push(a[i]);
            }
            else if (!pq.empty())
            {
                ans += pq.top();
                pq.pop();
            }
        }
        cout << ans << '\n';
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1800/C2
// Submission : https://vjudge.net/solution/50618248