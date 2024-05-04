/*
    Author: Tajwar Saiyeed
    Date: 2024-05-04 21:44:58
    File: C - Save More Mice.cpp
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

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, k;
        cin >> n >> k;
        vll a(k);
        fr(i, 0, k) cin >> a[i];
        srtG(a);
        ll cat = 0, total = 0;
        fr(i, 0, k) if (cat < a[i])
        {
            cat += (n - a[i]);
            total++;
        }
        else
        {
            break;
        }
        cout << total << '\n';
    }
    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1593/C
// Submission : https://vjudge.net/solution/51103251