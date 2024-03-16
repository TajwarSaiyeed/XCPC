/*
    Author: Tajwar Saiyeed
    Date: 2024-03-16 17:28:51
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;

    int x = (b / c) * c;

    if (a <= x)
    {
        cout << x << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }

    return 0;
}

// Problem : https://atcoder.jp/contests/abc220/tasks/abc220_a
// Submission : https://atcoder.jp/contests/abc220/submissions/51273864