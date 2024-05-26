/*
    Author: Tajwar Saiyeed
    Date: 2024-05-25 22:29:00
    File: J - Joty and Chocolate.cpp
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
#define gcd(a, b) __gcd(a, b)
typedef long long ll;

ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, a, b, p, q, ans = 0, overlap = 0;
    cin >> n >> a >> b >> p >> q;

    ans += ((n / a) * p);
    ans += ((n / b) * q);
    overlap = (n / lcm(a, b));

    ans -= ((overlap * (p + q)));
    ans += (max(p, q) * overlap);
    cout << ans << '\n';
    return 0;
}

// Problem: https://codeforces.com/problemset/problem/678/C
// Submission: https://vjudge.net/solution/51489285