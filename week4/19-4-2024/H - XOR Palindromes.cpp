/*
    Author: Tajwar Saiyeed
    Date: 2024-04-19 23:25:33
    File: H - XOR Palindromes.cpp
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
        ll n;
        cin >> n;
        string s;
        cin >> s;

        ll minOneCount = 0, pairCount = 0, l = 0, r = n - 1;
        // fr(i, 0, n)
        // {
        //     if (s[i] == s[n - i - 1] && i < n - i - 1)
        //         // cout << i << n - i - 1 << "- p - " << s[i] << ' ' << s[n - i - 1] << '\n';
        //         pairCount += 2;
        //     else
        //         minOneCount++;
        // }
        while (l < r)
        {
            if (s[l] == s[r])
                pairCount += 2;
            else
                minOneCount++;
            l++;
            r--;
        }

        string ans = "";

        fr(i, 0, n + 1)
        {
            ll total = i;
            total -= minOneCount;

            if (total >= 0)
            {
                ll remaining = total - pairCount, mid = total % 2;

                total = max(mid, remaining);
                total = max(0LL, total - (n % 2));

                if (total == 0)
                    ans.push_back('1');
                else
                    ans.push_back('0');
            }
            else
            {
                ans.push_back('0');
            }
        }

        cout << ans << '\n';
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1867/B
// Submission : https://vjudge.net/solution/50761146