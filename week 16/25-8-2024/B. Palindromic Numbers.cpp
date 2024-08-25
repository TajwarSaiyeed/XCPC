/*
    Author: Tajwar Saiyeed
    Date: 2024-08-25 10:57:41
    File: B. Palindromic Numbers.cpp
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
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

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans;
    if (s[0] == '9')
    {
        string make(n + 1, '1');
        int carry = 0;
        for (int i = n - 1; i >= 0; --i)
        {
            int digit = s[i] - '0';
            int sub = (make[i + 1] - '0') - digit - carry;

            if (sub < 0)
            {
                sub += 10;
                carry = 1;
            }
            else
            {
                carry = 0;
            }

            ans += to_string(sub);
        }
        reverse(ans.begin(), ans.end());
    }
    else
    {
        for (char x : s)
        {
            ans += to_string(9 - (x - '0'));
        }
    }

    cout << ans << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}

// Problem : https://codeforces.com/contest/1700/problem/B