/*
    Author: Tajwar Saiyeed
    Date: 2024-05-10 21:32:20
    File: D. Binary Cut.cpp
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

        if (is_sorted(s.begin(), s.end()))
        {
            cout << 1 << '\n';
        }
        else
        {
            ll transitionsCount = 1;
            char currentChar = s[0];
            ll i = 0;
            fr(i, 0, s.length()) if (s[i] != currentChar)
            {
                currentChar = s[i];
                transitionsCount++;
            }
            auto flag = s.find("01");
            if (flag != string::npos)
                transitionsCount--;

            cout << transitionsCount << '\n';
        }
    }

    return 0;
}

// Problem : https://codeforces.com/contest/1971/problem/D
// Submission : https://codeforces.com/contest/1971/submission/260411541