/*
    Author: Tajwar Saiyeed
    Date: 2024-03-21 10:58:35
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
        int n;
        cin >> n;
        vector<string> words[3];
        map<string, int> frq;

        for (int i = 0; i < 3; i++)
        {
            words[i].resize(n);
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> words[i][j];
                frq[words[i][j]]++;
            }
        }

        int points[3] = {0, 0, 0};
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (frq[words[i][j]] == 1)
                {
                    points[i] += 3;
                }
                else if (frq[words[i][j]] == 2)
                {
                    points[i] += 1;
                }
            }
        }

        cout << points[0] << " " << points[1] << " " << points[2] << endl;
    }
    return 0;
}

// Problem: https://codeforces.com/problemset/problem/1722/C
// Submission : https://vjudge.net/solution/50030182