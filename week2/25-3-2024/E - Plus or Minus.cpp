/*
    Author: Tajwar Saiyeed
    Date: 2024-03-25 21:57:05
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
        int a, b, c;
        cin >> a >> b >> c;

        if ((a + b) <= c)
        {
            cout << "+\n";
        }
        else
        {
            cout << "-\n";
        }
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1807/A

// Submission : https://vjudge.net/solution/50178389