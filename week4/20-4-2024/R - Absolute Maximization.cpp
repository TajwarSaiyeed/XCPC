/*
    Author: Tajwar Saiyeed
    Date: 2024-04-20 22:31:02
    File: R - Absolute Maximization.cpp
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
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;
        vll a(n);
        fr(i, 0, n) cin >> a[i];
        ll ans = 0;
        fr(i, 0, 32)
        {
            bool o = false, z = false;
            fr(j, 0, n)
            {
                if (a[j] & (1LL << i))
                    o = true;
                else
                    z = true;
            }

            if (o && z)
                ans |= (1LL << i);
        }

        cout << ans << "\n";
    }
    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1763/A

// Submission : https://vjudge.net/solution/51267228