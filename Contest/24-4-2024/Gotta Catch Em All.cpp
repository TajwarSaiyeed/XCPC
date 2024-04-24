/*
    Author: Tajwar Saiyeed
    Date: 2024-04-24 21:13:23
    File: Gotta Catch Em All.cpp

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
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> a(n);
        fr(i, 0, n) cin >> a[i];

        int cost = 0;
        fr(i, 0, n)
            cost += min(y, x * a[i]);

        cout << cost << endl;
    }

    return 0;
}