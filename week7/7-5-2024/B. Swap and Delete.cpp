/*
    Author: Tajwar Saiyeed
    Date: 2024-05-07 17:58:06
    File: B. Swap and Delete.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define p1 cout << '1'
#define p0 cout << '0'
#define nl '\n'
#define vll vector<ll>
#define vi vector<int>
#define vs vector<string>
#define fr(i, ivalue, n) for (int i = ivalue; i < n; i++)
#define nfr(i, ivalue, n) for (int i = ivalue; i > n; i--)
#define srt(vll) sort(a.begin(), a.end())
#define srtG(vll) sort(a.begin(), a.end(), greater<ll>())
#define mps map<string, int>
#define dt(n) fixed << setprecision(n)
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        int o = 0, z = 0;
        fr(i, 0, s.length())(s[i] == '1') ? o++ : z++;
        fr(j, 0, s.length())
        {
            if ((s[j] == '1' && z > 0) || (s[j] == '0' && o > 0))
                s[j] == '1' ? z-- : o--;
            else
                break;
        }
        cout << z + o << "\n";
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1913/B
// Submission : https://vjudge.net/solution/51154148