/*
    Author: Tajwar Saiyeed
    Date: 2024-03-19 20:05:18
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    for (int i = a; i <= c; i += a)
    {
        ans += b;
    }

    cout << ans << endl;

    return 0;
}

// Problem: https://atcoder.jp/contests/abc125/tasks/abc125_a
// SUbmission: https://atcoder.jp/contests/abc125/submissions/51450217