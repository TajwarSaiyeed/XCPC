/*
    Author: Tajwar Saiyeed
    Date: 2024-05-17 22:46:44
    File: N - Composite Coloring.cpp
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

    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    while (tc--)
    {
        int n;
        cin >> n;
        vll a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> color(n, -1);
        int cnt = 0;

        for (int i = 0; i < primes.size(); i++)
        {
            bool flag = false;
            for (int j = 0; j < n; j++)
            {
                if (color[j] == -1 && a[j] % primes[i] == 0)
                {
                    color[j] = i + 1;
                    flag = true;
                }
            }
            if (flag)
                cnt++;
        }

        cout << cnt << '\n';

        for (int i = 0; i < n; i++)
            cout << color[i] << ' ';

        cout << '\n';
    }

    return 0;
}

// Problem :  https://codeforces.com/problemset/problem/1332/B