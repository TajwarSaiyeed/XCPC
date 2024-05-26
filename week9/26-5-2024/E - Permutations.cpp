/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 15:09:36
    File: E - Permutations.cpp
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

    ll n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << nl;
        return 0;
    }

    if (n < 4)
    {
        cout << "NO SOLUTION" << nl;
        return 0;
    }

    fr(i, 2, n + 1)
    {
        cout << i << " ";
        i++;
    }

    fr(i, 1, n + 1)
    {
        cout << i << " ";
        i++;
    }

    return 0;
}

// Problem : https://cses.fi/problemset/task/1070/
// Submission: https://vjudge.net/solution/51495720