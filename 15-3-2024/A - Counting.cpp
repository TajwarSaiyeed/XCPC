/*
    Author: Tajwar Saiyeed
    Date: 2024-03-15 14:00:41
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B;
    cin >> A >> B;

    if (B < A)
    {
        cout << 0 << '\n';
    }
    else
    {
        cout << (B - A) + 1 << '\n';
    }

    return 0;
}

// Problem Link: https://atcoder.jp/contests/abc209/tasks/abc209_a
// Submission: https://atcoder.jp/contests/abc209/submissions/51240912
