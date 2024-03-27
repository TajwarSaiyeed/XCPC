/*
    Author: Tajwar Saiyeed
    Date: 2024-03-27 17:42:37
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
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        if ((n - s.size()) % 2 == 0)
        {
            cout << s.size() << endl;
        }
        else
        {
            cout << s.size() - 1 << endl;
        }
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1692/B

// Submission : https://vjudge.net/solution/50215271