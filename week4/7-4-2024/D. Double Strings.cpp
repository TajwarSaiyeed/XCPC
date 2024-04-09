/*
    Author: Tajwar Saiyeed
    Date: 2024-04-07 22:56:46
    File : D. Double Strings.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define p1 cout << "1"
#define p0 cout << "0"
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
        ll n;
        cin >> n;
        vs s(n + 1);
        mps mp;
        fr(i, 0, n)
        {
            cin >> s[i];
            mp[s[i]]++;
        }

        fr(i, 0, n)
        {
            bool flag = false;
            fr(j, 0, s[i].size())
            {
                string s1 = s[i].substr(0, j);
                string s2 = s[i].substr(j, s[i].size());

                if (mp[s1] > 0 && mp[s2] > 0)
                {
                    flag = true;
                    break;
                }
            }
            flag ? p1 : p0;
        }
        nl;
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1703/D
// Submission : https://vjudge.net/solution/50521847