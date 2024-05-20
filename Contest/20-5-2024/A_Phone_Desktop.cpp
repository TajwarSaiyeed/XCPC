/*
    Author: Tajwar Saiyeed
    Date: 2024-05-20 21:35:58
    File: A_Phone_Desktop.cpp
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
        int x, y;
        cin >> x >> y;

        int s2 = (y + 1) / 2;

        int c2 = y * 4;
        int tc = s2 * 15;

        int rc = tc - c2;

        int r1 = max(0, x - rc);

        int s1 = (r1 + 14) / 15;

        int ts = s2 + s1;

        cout << ts << '\n';
    }

    return 0;
}