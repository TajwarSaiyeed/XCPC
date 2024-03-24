/*
    Author: Tajwar Saiyeed
    Date: 2024-03-24 14:29:34
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;
    ll cnt = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i])
            cnt++;
    }

    cout << cnt << "\n";

    return 0;
}

// Problem : https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en

// Submisson : https://vjudge.net/solution/50151999