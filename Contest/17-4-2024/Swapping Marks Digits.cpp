/*
    Author: Tajwar Saiyeed
    Date: 2024-04-17 21:25:31
    File: Swapping Marks Digits.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'
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
        int x, y;
        cin >> x >> y;
        if (x > y)
            yes;
        else if (x % 10 > y % 10 || x % 10 > y / 10 || x / 10 > y % 10 || x / 10 > y / 10)
            yes;
        else
            no;
    }

    return 0;
}