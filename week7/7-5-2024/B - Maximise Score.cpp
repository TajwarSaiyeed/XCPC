/*
    Author: Tajwar Saiyeed
    Date: 2024-05-07 17:25:25
    File: B - Maximise Score.cpp
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
        int n;
        cin >> n;
        vll v(n);
        fr(i, 0, n) cin >> v[i];
        ll min_score = abs(v[0] - v[1]);
        fr(i, 1, n - 1)
        {
            ll optimal_score = max(abs(v[i] - v[i - 1]), abs(v[i] - v[i + 1]));
            min_score = min(min_score, optimal_score);
        }
        min_score = min(min_score, abs(v[n - 1] - v[n - 2]));
        cout << min_score << endl;
    }
    return 0;
}

// Problem : https://www.codechef.com/problems/MAXIMSCORE
// Submission: https://vjudge.net/solution/51153422