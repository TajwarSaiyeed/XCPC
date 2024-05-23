/*
    Author: Tajwar Saiyeed
    Date: 2024-05-23 21:23:28
    File: E - Grandma Capa Knits a Scarf.cpp
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 1e9;
        for (int i = 'a'; i <= 'z'; i++)
        {
            int x = 0, l = 0, r = n - 1;
            while (l <= r)
                if (s[r] == i && s[l] != s[r])
                {
                    r--;
                    x++;
                }
                else if (s[l] == i && s[l] != s[r])
                {
                    l++;
                    x++;
                }
                else if (s[l] == s[r])
                {
                    l++;
                    r--;
                }
                else
                {
                    x = 1e9;
                    break;
                }
            ans = min(ans, x);
        }

        cout << (ans == 1e9 ? -1 : ans) << nl;
    }
    return 0;
}