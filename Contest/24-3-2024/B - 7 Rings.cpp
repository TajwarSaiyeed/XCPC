/*
    Author: Tajwar Saiyeed
    Date: 2024-03-24 22:39:48
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

        int ans = n * x;
        int cnt = 0;
        while (ans && cnt <= 5)
        {
            ans = ans / 10;
            cnt++;
        }

        if (cnt == 5)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

// Problem : https://vjudge.net/contest/618080#problem/B

// Submission : https://vjudge.net/solution/50155870