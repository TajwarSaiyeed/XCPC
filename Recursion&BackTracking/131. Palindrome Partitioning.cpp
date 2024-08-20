/*
    Author: Tajwar Saiyeed
    Date: 2024-08-20 09:27:08
    File: 131. Palindrome Partitioning.cpp
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
#define vvs vector<vector<string>>
typedef long long ll;

class Solution
{
public:
    bool isPalindrome(string &s, int l, int r)
    {
        while (l <= r)
        {
            if (s[l++] != s[r--])
                return false;
        }

        return true;
    }

    void f(int idx, vvs &ans, vs &a, string &s, int n)
    {
        if (idx == n)
        {
            ans.push_back(a);
            return;
        }

        for (int i = idx; i < n; ++i)
        {
            if (isPalindrome(s, idx, i))
            {
                a.push_back(s.substr(idx, i - idx + 1));
                f(i + 1, ans, a, s, n);
                a.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s)
    {
        vvs ans;
        vs a;
        int n = s.size();
        f(0, ans, a, s, n);
        return ans;
    }
};

void solve()
{
    string s;
    cin >> s;

    Solution solution;
    vvs ans = solution.partition(s);

    for (auto &v : ans)
    {
        for (auto &x : v)
        {
            cout << x << " ";
        }
        cout << nl;
    }
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

// Problem : https://leetcode.com/problems/palindrome-partitioning/
