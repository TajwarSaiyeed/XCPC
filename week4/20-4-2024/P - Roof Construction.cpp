/*
    Author: Tajwar Saiyeed
    Date: 2024-04-20 22:32:27
    File: P - Roof Construction.cpp
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
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, k = 0;
        cin >> n;

        while ((1 << (k + 1)) <= n - 1)
            k++;

        nfr(i, (1 << k) - 1, -1) cout << i << " ";
        fr(j, (1 << k), n) cout << j << " ";
        cout << "\n";
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1632/B
// Submission : https://vjudge.net/solution/51267348