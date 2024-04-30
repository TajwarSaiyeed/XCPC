/*
    Author: Tajwar Saiyeed
    Date: 2024-04-23 22:49:40
    File: N - Three Indices.cpp
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
        ll n;
        cin >> n;
        vll a(n + 1);
        fr(i, 1, n + 1) cin >> a[i];

        bool flag = true;
        fr(i, 2, n)
        {
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
            {
                yes;
                cout << i - 1 << " " << i << " " << i + 1 << nl;
                flag = false;
                break;
            }
        }

        if (flag)
            no;
    }
    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1380/A
// Submission : https://vjudge.net/solution/51020030