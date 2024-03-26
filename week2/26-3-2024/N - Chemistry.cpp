/*
    Author: Tajwar Saiyeed
    Date: 2024-03-26 19:30:32
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int freq[26] = {0};

        for (char i : s)
        {
            freq[i - 'a']++;
        }

        int ans = 0;

        for (char ch : s)
        {
            if (freq[ch - 'a'] % 2 == 1)
            {
                ans++;
                freq[ch - 'a'] = 0;
            }
        }

        if (ans <= (k + 1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1883/B
// Submission : https://vjudge.net/solution/50196150
// https://vjudge.net/contest/617644#problem/N