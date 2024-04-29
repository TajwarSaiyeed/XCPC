/*
    Author: Tajwar Saiyeed
    Date: 2024-04-29 23:11:49
    File: A - Judged.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define p1 cout << '1'
#define p0 cout << '0'
#define nl cout << '\n'
#define vll vector<ll>
#define vi vector<int>
#define vs vector<string>
#define fr(i, ivalue, n) for (int i = ivalue; i < n; i++)
#define nfr(i, ivalue, n) for (int i = ivalue; i > n; i--)
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
        vi a(5);
        int cnt = 0;
        fr(i, 0, 5)
        {
            cin >> a[i];
            if (a[i] != 0)
                cnt++;
        }

        if (cnt >= 4)
            yes;
        else
            no;
    }
    return 0;
}

// Solution : https://vjudge.net/solution/51003410