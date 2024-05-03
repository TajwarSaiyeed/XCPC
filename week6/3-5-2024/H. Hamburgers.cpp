/*
    Author: Tajwar Saiyeed
    Date: 2024-05-03 20:58:59
    File: H. Hamburgers.cpp
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
    string s;
    cin >> s;
    ll nb, ns, nc, pb, ps, pc, r;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;
    ll b = 0, s1 = 0, c = 0;
    fr(i, 0, s.size())
    {
        if (s[i] == 'B')
            b++;
        else if (s[i] == 'S')
            s1++;
        else
            c++;
    }
    ll l = 0, h = 1e13, ans = 0;
    while (l <= h)
    {
        ll mid = l + (h - l) / 2;
        ll cost = max(0LL, mid * b - nb) * pb + max(0LL, mid * s1 - ns) * ps + max(0LL, mid * c - nc) * pc;
        if (cost <= r)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            h = mid - 1;
    }
    cout << ans << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    testCase();
    return 0;
}

// Problem : https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/H