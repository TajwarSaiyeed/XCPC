/*
    Author: Tajwar Saiyeed
    Date: 2024-04-23 22:47:34
    File: C - Decode String.cpp
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
        int n;
        cin >> n;
        string s, answer = "";
        cin >> s;

        fr(i, 0, n)
        {
            if (i + 2 < n && s[i + 2] == '0' && (i + 3 >= n || s[i + 3] != '0'))
            {

                answer.push_back((char)(96 + (((s[i] - '0') * 10) + (s[i + 1] - '0'))));
                i += 2;
            }
            else
            {
                int num = (s[i] - '0');
                answer.push_back((char)(96 + num));
            }
        }

        cout << answer << "\n";
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1729/B
// Submission : https://vjudge.net/solution/50987353