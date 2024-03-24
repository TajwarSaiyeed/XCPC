/*
    Author: Tajwar Saiyeed
    Date: 2024-03-24 22:35:07
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
        int n, x;
        cin >> n >> x;

        if (n <= x)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

// Problem : https://vjudge.net/contest/618080#problem/A

// Submission : https://vjudge.net/solution/50155530