/*
    Author: Tajwar Saiyeed
    Date: 2024-03-21 12:48:52
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    for (int i = 0; i <= c; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            if (i * a + j * b == c)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/633/A
// Solution: https://vjudge.net/solution/50031751