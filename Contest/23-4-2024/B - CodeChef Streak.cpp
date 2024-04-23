/*
    Author: Tajwar Saiyeed
    Date: 2024-04-23 21:37:53
    File: B - CodeChef Streak.cpp
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
        vll om(n), addy(n);
        fr(i, 0, n) cin >> om[i];
        fr(i, 0, n) cin >> addy[i];

        ll streak1 = 0, streak2 = 0, max_streak1 = 0, max_streak2 = 0;
        fr(i, 0, n)
        {
            if (om[i] > 0)
            {
                streak1++;
                max_streak1 = max(max_streak1, streak1);
            }
            else
                streak1 = 0;
        }

        fr(i, 0, n)
        {
            if (addy[i] > 0)
            {
                streak2++;
                max_streak2 = max(max_streak2, streak2);
            }
            else
                streak2 = 0;
        }

        if (max_streak1 > max_streak2)
            cout << "Om" << '\n';
        else if (max_streak1 < max_streak2)
            cout << "Addy" << '\n';
        else
            cout << "Draw" << '\n';
    }

    return 0;
}