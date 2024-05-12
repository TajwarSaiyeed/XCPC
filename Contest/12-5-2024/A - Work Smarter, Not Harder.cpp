/*
    Author: Tajwar Saiyeed
    Date: 2024-05-12 21:12:18
    File: A - Work Smarter, Not Harder.cpp
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
        double l, v1, v2;
        cin >> l >> v1 >> v2;

        ll tortoise = ceil(l / v1);
        ll hare = ceil(l / v2);

        if (hare - tortoise > 0)
            cout << hare - tortoise << nl;
        else if (hare - tortoise < 0)
            cout << (hare - tortoise + 1) * -1 << nl;
        else
            cout << -1 << nl;
    }

    return 0;
}
