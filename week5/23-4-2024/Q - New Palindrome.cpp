/*
    Author: Tajwar Saiyeed
    Date: 2024-04-23 22:48:30
    File: Q - New Palindrome.cpp
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
        string s;
        cin >> s;

        int n = s.size();

        int cnt = 0;

        if (n % 2 == 0 && n > 2)
        {
            fr(i, 1, n / 2)
            {
                if (s[i] != s[i - 1])
                {
                    cnt++;
                }
            }
        }
        else if (n % 2 == 1 && n > 3)
        {
            fr(i, 1, n / 2)
            {
                if (s[i] != s[i - 1])
                {
                    cnt++;
                }
            }
        }

        if (cnt)
            yes;
        else
            no;
    }
    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1832/A
// Solution : https://vjudge.net/solution/50937913