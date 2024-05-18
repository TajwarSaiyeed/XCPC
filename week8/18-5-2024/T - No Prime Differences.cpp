/*
    Author: Tajwar Saiyeed
    Date: 2024-05-18 21:11:31
    File: T - No Prime Differences.cpp
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

    int tc;
    cin >> tc;

    while (tc--)
    {
        ll n, m;
        cin >> n >> m;

        ll arr[n][m], num = 1;
        fr(i, 0, n)
            fr(j, 0, m)
        {
            arr[i][j] = num;
            num++;
        }

        fr(i, 0, n)
        {
            fr(j, 0, m) if ((i + j) % 2 == 0)
                    cout
                << arr[i][j] << ' ';
            else cout << n * m + 1 - arr[i][j] << ' ';
            cout << '\n';
        }
        cout << '\n';
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1838/C