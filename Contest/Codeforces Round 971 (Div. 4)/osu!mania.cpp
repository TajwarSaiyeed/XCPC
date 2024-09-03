/*
    Author: Tajwar Saiyeed
    Date: 2024-09-03 21:03:20
    File: osu!mania.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define fr(i, ivalue, n) for (int i = ivalue; i < n; i++)
#define nfr(i, ivalue, n) for (int i = ivalue; i > n; i--)
typedef long long ll;

void solve()
{

    int n;
    cin >> n;
    vector<string> s(n);
    fr(i, 0, n) cin >> s[i];

    vector<int> ans;

    nfr(i, n - 1, -1)
    {
        for (int x = 0; x < s[i].size(); x++)
        {
            if (s[i][x] == '#')
            {
                ans.push_back(x + 1);
                break;
            }
        }
    }

    for (auto &i : ans)
        cout << i << ' ';

    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}

// Problem :