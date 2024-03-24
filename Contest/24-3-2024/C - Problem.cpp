/*
    Author: Tajwar Saiyeed
    Date: 2024-03-24 22:57:50
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
        int n, m;
        cin >> n >> m;

        if (n == m)
        {
            cout << "YES\n";
            continue;
        }

        if (n > m && (n - m) % 2 == 0)
            cout << "YES\n";
        else if (n < m && (m - n) % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

// Problem : https://vjudge.net/contest/618080#problem/C

// Submission : https://vjudge.net/solution/50156273