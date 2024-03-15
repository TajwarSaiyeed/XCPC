/*
    Author: Tajwar Saiyeed
    Date: 2024-03-15 17:03:02
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << "0000" << '\n';
        return 0;
    }
    int x = n;
    vector<int> v;
    while (x != 0)
    {
        x = x / 10;
        v.push_back(x);
    }
    if (v.size() < 4)
    {
        for (int i = 1; i <= 4 - v.size(); i++)
        {
            cout << 0;
        }
        cout << n << '\n';
    }
    else
    {
        cout << n << '\n';
    }

    return 0;
}

// Problem : https://atcoder.jp/contests/abc222/tasks/abc222_a
// Submission: https://atcoder.jp/contests/abc222/submissions/51246731