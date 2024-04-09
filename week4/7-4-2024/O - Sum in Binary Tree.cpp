/*
    Author: Tajwar Saiyeed
    Date: 2024-04-07 22:57:24
    File: O - Sum in Binary Tree.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl cout << '\n'
#define vll vector<ll>
#define vi vector<int>
#define fr(i, ivalue, n) for (int i = ivalue; i < n; i++)
#define nfr(i, ivalue, n) for (int i = ivalue; i > n; i--)
#define srtG(vll) sort(a.begin(), a.end(), greater<ll>())
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
        ll sum = n;
        while (n > 0)
        {
            sum += n / 2;
            n /= 2;
        }

        cout << sum;
        nl;
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1843/C
// Submission : https://vjudge.net/solution/50519200