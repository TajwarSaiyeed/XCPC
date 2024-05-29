/*
    Author: Tajwar Saiyeed
    Date: 2024-05-29 20:39:54
    File: My First Geometry Problem.cpp
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
        string s;
        cin >> s;
        int left_right = 0, up_down = 0;
        fr(i, 0, 4)
        {
            if (s[i] == '1')
                if (i < 2)
                    left_right++;
                else
                    up_down++;
        }
        cout << (left_right * 10 + 1) * (up_down * 10 + 1) << nl;
    }

    return 0;
}