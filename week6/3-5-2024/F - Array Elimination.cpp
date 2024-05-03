/*
    Author: Tajwar Saiyeed
    Date: 2024-05-03 20:14:54
    File: F - Array Elimination.cpp
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
    ll n;
    cin >> n;
    vll a(n);
    fr(i, 0, n) cin >> a[i];
    vll b(30, 0);
    fr(i, 0, 30)
    {
        ll num = (1ll << i);
        fr(j, 0, n) if ((a[j] & num) != 0) b[i]++;
    }
    fr(k, 1, n + 1)
    {
        bool flag = false;
        fr(i, 0, 30)
        {
            if ((b[i] % k) != 0)
            {
                flag = true;
                break;
            }
        }
        if (flag == 0)
            cout << k << " ";
    }
    cout << '\n';
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

// Problem : https://codeforces.com/problemset/problem/1602/C
// Submission : https://vjudge.net/solution/51080471