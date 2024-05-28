/*
    Author: Tajwar Saiyeed
    Date: 2024-05-28 20:15:27
    File: M - MEX Game 1.cpp
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
#define srt(vll) sort(vll.begin(), vll.end())
#define srtG(vll) sort(vll.begin(), vll.end(), greater<ll>())
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
        int n;
        cin >> n;
        vll frq(n + 1, 0);
        fr(i, 0, n)
        {
            int x;
            cin >> x;
            frq[x]++;
        }
        int cnt = 0;
        fr(i, 0, n + 1)
        {
            cnt += (frq[i] == 1);
            if ((cnt == 2) || (frq[i] == 0))
            {
                cout << i << '\n';
                break;
            }
        }
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1944/C
// Submission : https://vjudge.net/solution/51524664