/*
    Author: Tajwar Saiyeed
    Date: 2024-03-30 22:19:49
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
        int wheel;
        cin >> wheel;

        int a[wheel + 1];
        for (int i = 0; i < wheel; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < wheel; i++)
        {
            int n;
            cin >> n;
            string s;
            cin >> s;

            for (int j = 0; j < n; j++)
            {
                if (s[j] == 'D')
                {
                    if (a[i] == 9)
                        a[i] = 0;
                    else
                        a[i]++;
                }
                if (s[j] == 'U')
                {
                    if (a[i] == 0)
                        a[i] = 9;
                    else
                        a[i]--;
                }
            }
        }
        for (int i = 0; i < wheel; i++)
        {
            cout << a[i] << " ";
        }

        cout << '\n';
    }
    return 0;
}