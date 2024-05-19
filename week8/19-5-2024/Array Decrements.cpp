/*
    Author: Tajwar Saiyeed
    Date: 2024-05-19 22:26:12
    File: Array Decrements.cpp
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
        vi a(n), b(n);
        fr(i, 0, n) cin >> a[i];
        fr(i, 0, n) cin >> b[i];

        int firstDifference = -1;
        int maxDifference = -1;
        bool isImpossible = false;

        fr(i, 0, n)
        {
            if (a[i] < b[i])
            {
                isImpossible = true;
                break;
            }
            if (b[i] != 0)
            {
                if (firstDifference == -1)
                    firstDifference = a[i] - b[i];
                else if (a[i] - b[i] != firstDifference)
                {
                    isImpossible = true;
                    break;
                }
            }
            else
                maxDifference = (maxDifference > a[i] - b[i]) ? maxDifference : a[i] - b[i];
        }
        if (isImpossible)
        {
            no;
            continue;
        }

        if (firstDifference == -1 || maxDifference <= firstDifference)
            yes;
        else
            no;
    }

    return 0;
}

// Problem Link: https://codeforces.com/contest/1690/problem/B
// Submission : https://vjudge.net/solution/51380894