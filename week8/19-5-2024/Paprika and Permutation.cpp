/*
    Author: Tajwar Saiyeed
    Date: 2024-05-19 22:55:05
    File: Paprika and Permutation.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define p1 cout << '1'
#define p0 cout << '0'
#define nl '\n'
#define vll vector<ll>
#define vi vector<int>
#define vs vector<string>
#define fr(i, ivalue, n) for (int i = ivalue; i < n; i++)
#define nfr(i, ivalue, n) for (int i = ivalue; i > n; i--)
#define srt(vll) sort(vll.begin(), vll.end())
#define srtG(vll) sort(vll.begin(), vll.end(), greater<ll>())
#define mps map<string, int>
#define dt(n) fixed << setprecision(n)
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
        vll a(n), v;
        map<ll, ll> mp, mp1;
        fr(i, 0, n)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        for (auto it : mp)
        {
            ll x = it.first, y = it.second;
            if (x <= n)
            {
                fr(j, 1, y) v.push_back(x);
                mp1[x] = 1;
            }
            else
                fr(j, 1, y + 1) v.push_back(x);
        }

        ll cnt = 1, ans = 0;
        fr(i, 0, v.size())
        {
            fr(j, cnt, n + 1)
            {
                if (mp1[j] == 1)
                    cnt++;
                else
                    break;
            }

            ll z = (v[i] - 1) / 2;
            if (cnt <= z)
            {
                cnt++;
                ans++;
            }
            else
            {
                ans = -1;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}

// Submission :  https://vjudge.net/solution/51467632