/*
    Author: Tajwar Saiyeed
    Date: 2024-05-25 22:32:47
    File: P - Divide and Equalize.cpp
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

map<ll, ll> mp;
void prime(int n)
{
    fr(i, 2, sqrt(n) + 1)
    {
        while (n % i == 0)
        {
            mp[i]++;
            n /= i;
        }
    }
    if (n > 1)
        mp[n]++;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vll v(n);
        mp.clear();
        fr(i, 0, n)
        {
            cin >> v[i];
            prime(v[i]);
        }

        bool flag = true;
        for (auto x : mp)
        {
            if (x.second % n != 0)
            {
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << nl;
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1881/D
// Submission : https://vjudge.net/solution/51491718