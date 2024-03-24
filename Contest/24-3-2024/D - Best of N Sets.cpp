/*
    Author: Tajwar Saiyeed
    Date: 2024-03-24 23:30:41
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--)
    {
        int x, y;
        cin >> x >> y;
        cout << max(x, y) * 2 - 1 << '\n';
    }

    return 0;
}

// Problem : https://vjudge.net/contest/618080#problem/D

// Submission : https://vjudge.net/solution/50156621