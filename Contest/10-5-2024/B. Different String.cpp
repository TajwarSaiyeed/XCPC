/*
    Author: Tajwar Saiyeed
    Date: 2024-05-10 20:40:40
    File: B. Different String.cpp
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

        bool flag = false;

        fr(i, 0, s.size() - 1)
        {
            if (s[i] != s[i + 1])
            {
                swap(s[i], s[i + 1]);
                yes;
                cout << s << endl;
                flag = true;
                break;
            }
        }

        if (!flag)
            no;
    }

    return 0;
}

// Problem : https://codeforces.com/contest/1971/problem/B
// Submission : https://codeforces.com/contest/1971/submission/260331537