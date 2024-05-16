/*
    Author: Tajwar Saiyeed
    Date: 2024-05-16 22:26:02
    File: G - Bash's Big Day.cpp
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

    int n;
    cin >> n;
    vll a(n), cnt(100005, 0);
    fr(i, 0, n) cin >> a[i];
    fr(i, 0, n) cnt[a[i]]++;
    int ans = 0, i = 2;
    while (i < 100005)
    {
        int sum = 0;
        for (int j = i; j < 100005; j += i)
            sum += cnt[j];
        ans = max(ans, sum);
        i++;
    }
    cout << ans << nl;

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/757/B