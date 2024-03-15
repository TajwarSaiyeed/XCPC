/*
    Author: Tajwar Saiyeed
    Date: 2024-03-15 14:36:42
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int ans = n + m;
    for (int i = n; i > 0; i--)
    {
        for (int j = n - 1; j > 0; j--)
        {
            ans = max(ans, i + j);
        }
    }

    for (int i = m; i > 0; i--)
    {
        for (int j = m - 1; j > 0; j--)
        {
            ans = max(ans, i + j);
        }
    }

    cout << ans << '\n';

    return 0;
}

// Problem Link: https://atcoder.jp/contests/abc124/tasks/abc124_a
// Submission: https://atcoder.jp/contests/abc124/submissions/51242274