/*
    Author: Tajwar Saiyeed
    Date: 2024-03-31 20:05:09
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl cout << '\n'
#define vll vector<ll>
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        map<ll, ll> mp;
        ll maxIndex = 0;
        fr(i, n)
        {
            ll x;
            cin >> x;
            mp[x]++;
            maxIndex = max(maxIndex, mp[x]);
        }
        ll ans = 0;
        while (maxIndex < n)
        {
            ans++;
            ans += min(maxIndex, n - maxIndex);
            maxIndex *= 2;
        }

        cout << ans << endl;
    }

    return 0;
}

// Problem : https://codeforces.com/contest/1665/problem/B
// Submission : https://vjudge.net/solution/50319925