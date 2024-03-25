/*
    Author: Tajwar Saiyeed
    Date: 2024-03-25 23:03:04
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
        int x;
        cin >> x;
        string s;
        cin >> s;

        int cnt = 0;

        for (int i = 0; i < x; i++)
        {
            if (s[i] == '(')
                cnt++;
            else
            {
                if (cnt > 0)
                    cnt--;
            }
        }

        cout << cnt << "\n";
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1374/C

// Submission : https://vjudge.net/solution/50179149