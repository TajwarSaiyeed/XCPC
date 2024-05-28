/*
    Author: Tajwar Saiyeed
    Date: 2024-05-28 21:38:17
    File: B. Sequence Game.cpp
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
        vll b(n), ans;
        fr(i, 0, n) cin >> b[i];
        ans.push_back(b[0]);
        fr(i, 1, n)
        {
            if (b[i - 1] > b[i])
                ans.push_back(1);
            ans.push_back(b[i]);
        }

        cout << ans.size() << '\n';
        fr(i, 0, ans.size()) cout << ans[i] << ' ';
        cout << '\n';
    }

    return 0;
}

// Problem : https://codeforces.com/contest/1862/problem/B