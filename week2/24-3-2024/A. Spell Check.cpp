/*
    Author: Tajwar Saiyeed
    Date: 2024-03-24 17:42:54
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string result = "Timru";

    while (n--)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;

        if (x != 5)
        {
            cout << "NO\n";
            continue;
        }

        sort(s.begin(), s.end());
        if (s == result)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

// Problem : https://codeforces.com/contest/1722/problem/A
// Submission : https://vjudge.net/solution/50151944