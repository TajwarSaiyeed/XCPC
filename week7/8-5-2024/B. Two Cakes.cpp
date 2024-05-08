/*
    Author: Tajwar Saiyeed
    Date: 2024-05-08 17:54:36
    File: B. Two Cakes.cpp
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    fr(i, 1, min(a, n - 1) + 1)
    {
        int j = n - i;
        if (j > b)
            continue;
        ans = max(ans, min(a / i, b / j));
    }
    cout << ans << '\n';

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/911/B
// Solution : https://vjudge.net/solution/51169099