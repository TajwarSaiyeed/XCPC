/*
    Author: Tajwar Saiyeed
    Date: 2024-05-28 21:11:02
    File: A. Gift Carpet.cpp
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
        int n, m;
        cin >> n >> m;

        vector<string> a(n);
        fr(i, 0, n) cin >> a[i];

        if (m < 4)
        {
            cout << "NO" << '\n';
            continue;
        }

        string text = "vika";
        ll cnt = 0;
        bool flag = false;

        fr(j, 0, m)
        {
            fr(i, 0, n)
            {
                if (a[i][j] == text[cnt])
                {
                    cnt++;
                    break;
                }
            }
            if (cnt == 4)
            {
                flag = true;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << '\n';
    }

    return 0;
}

// Problem : https://codeforces.com/contest/1862/problem/A