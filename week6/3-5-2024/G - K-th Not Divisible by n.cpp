/*
    Author: Tajwar Saiyeed
    Date: 2024-05-03 20:58:36
    File: G - K-th Not Divisible by n.cpp
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
#define srt(vll) sort(a.begin(), a.end())
#define srtG(vll) sort(a.begin(), a.end(), greater<ll>())
#define mps map<string, int>
#define dt(n) fixed << setprecision(n)
typedef long long ll;

void testCase()
{
    ll n, k;
    cin >> n >> k;
    ll ans = k + (k - 1) / (n - 1);
    cout << ans << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
        testCase();

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1352/C
// Solution : https://vjudge.net/solution/51081942