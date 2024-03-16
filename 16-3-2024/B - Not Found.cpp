/*
    Author: Tajwar Saiyeed
    Date: 2024-03-16 10:12:21
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int frq[26] = {0};
    for (char ch : s)
    {
        frq[ch - 'a']++;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (frq[i - 'a'] == 0)
        {
            cout << i << '\n';
            return 0;
        }
    }

    cout << "None" << '\n';

    return 0;
}

// Problem : https://atcoder.jp/contests/abc071/tasks/abc071_b
// Submission : https://atcoder.jp/contests/abc071/submissions/51260924