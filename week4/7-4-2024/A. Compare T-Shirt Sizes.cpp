/*
    Author: Tajwar Saiyeed
    Date: 2024-04-10 05:38:12
    File: A. Compare T-Shirt Sizes.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define p1 cout << '1'
#define p0 cout << '0'
#define nl cout << '\n'
#define vll vector<ll>
#define vi vector<int>
#define vs vector<string>
#define fr(i, ivalue, n) for (int i = ivalue; i < n; i++)
#define nfr(i, ivalue, n) for (int i = ivalue; i > n; i--)
#define srtG(vll) sort(a.begin(), a.end(), greater<ll>())
#define mps map<string, int>
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        int s1Size = s1.size(), x1 = s1Size - 1, s2Size = s2.size(), x2 = s2Size - 1;

        if (s1 == s2)
            cout << "=";
        else if (s1[x1] == 'L' && (s2[x2] == 'M' || s2[x2] == 'S'))
            cout << ">";
        else if (s2[x2] == 'L' && (s1[x1] == 'M' || s1[x1] == 'S'))
            cout << "<";
        else if (s1[x1] == 'S' && (s2[x2] == 'M' || s2[x2] == 'L'))
            cout << "<";
        else if (s2[x2] == 'S' && (s1[x1] == 'M' || s1[x1] == 'L'))
            cout << ">";
        else if (s1[x1] == 'S' && s2[x2] == 'S')
            cout << (x1 < x2 ? ">" : "<");
        else if (s1[x1] == 'L' && s2[x2] == 'L')
            cout << (x1 < x2 ? "<" : ">");

        nl;
    }

    return 0;
}

// Problem : https://codeforces.com/contest/1741/problem/A
// Submission : https://vjudge.net/solution/50561683