/*
    Author: Tajwar Saiyeed
    Date: 2024-03-27 06:24:35
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k, s;
    cin >> k >> s;

    int count = 0;

    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            int l = s - i - j;
            if (l >= 0 && l <= k)
            {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}

// Problem : https://atcoder.jp/contests/abc051/tasks/abc051_b?lang=en

// Submission : https://vjudge.net/solution/50202972