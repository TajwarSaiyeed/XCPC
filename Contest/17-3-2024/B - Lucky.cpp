/*
    Author: Tajwar Saiyeed
    Date: 2024-03-17 22:38:06
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
        string s;
        cin >> s;
        int s1 = 0, s2 = 0;
        for (int i = 0; i < 3; i++)
        {
            s1 += s[i];
        }
        for (int i = 3; i < 6; i++)
        {
            s2 += s[i];
        }

        if (s1 == s2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}