/*
    Author: Tajwar Saiyeed
    Date: 2024-05-04 20:00:07
    File: A - String Game.cpp
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
        string s;
        cin >> s;

        int z = 0, o = 0;

        fr(i, 0, n) if (s[i] == '0')
            z++;
        else o++;

        if (min(z, o) % 2 == 0)
            cout << "Ramos\n";
        else
            cout << "Zlatan\n";
    }

    return 0;
}

// Problem : https://www.codechef.com/problems/STRAME
// Submission : https://vjudge.net/solution/51102060