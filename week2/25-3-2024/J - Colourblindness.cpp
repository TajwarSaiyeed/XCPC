/*
    Author: Tajwar Saiyeed
    Date: 2024-03-25 22:28:39
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
        int n;
        cin >> n;
        string s, s1;
        cin >> s >> s1;

        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'G' && s1[i] == 'R')
            {
                flag = false;
                break;
            }
            else if (s[i] == 'B' && s1[i] == 'R')
            {
                flag = false;
                break;
            }
            else if (s[i] == 'R' && s1[i] != 'R')
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1722/B

// Submission : https://vjudge.net/solution/50178773