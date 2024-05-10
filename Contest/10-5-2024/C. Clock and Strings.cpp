/*
    Author: Tajwar Saiyeed
    Date: 2024-05-10 21:05:26
    File: C. Clock and Strings.cpp
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
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        a--;
        b--;
        c--;
        d--;

        if (a > b)
            swap(a, b);
        if (c > d)
            swap(c, d);

        if ((a < c && c < b && !(a < d && d < b)) || (c < a && a < d && !(c < b && b < d)))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}