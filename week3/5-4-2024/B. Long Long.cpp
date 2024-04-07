/*
    Author: Tajwar Saiyeed
    Date: 2024-04-05 23:04:49
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
        ll n;
        cin >> n;
        vll a(n);
        ll absSum = 0;
        fr(i, 0, n)
        {
            cin >> a[i];
            absSum += abs(a[i]);
        }
        ll negativeSegments = 0;
        ll r = 0;

        bool neg = false;

        while (r < n)
        {
            if (a[r] < 0)
            {
                neg = true;
                while (neg && r < n)
                {
                    if (a[r] > 0)
                    {
                        negativeSegments++;
                        neg = false;
                    }
                    r++;
                }
            }
            else
            {
                r++;
            }
        }
        if (neg)
        {
            negativeSegments++;
        }

        cout << absSum << " " << negativeSegments << '\n';
    }
    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1843/B
// Submission :  https://vjudge.net/solution/50506196