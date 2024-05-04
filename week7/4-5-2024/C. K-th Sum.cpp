/*
    Author: Tajwar Saiyeed
    Date: 2024-05-04 20:17:44
    File: C. K-th Sum.cpp
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

    int n, k;
    cin >> n >> k;
    vll a(n), b(n), ans;
    fr(i, 0, n) cin >> a[i];
    fr(i, 0, n) cin >> b[i];
    srt(a);
    srt(b);
    fr(i, 0, n) fr(j, 0, n) ans.push_back(a[i] + b[j]);
    srt(ans);
    cout << ans[k - 1] << '\n';

    return 0;
}

// Problem : https://codeforces.com/edu/course/2/lesson/6/5/practice/contest/285084/problem/C