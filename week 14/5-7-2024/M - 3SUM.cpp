/*
    Author: Tajwar Saiyeed
    Date: 2024-07-05 22:10:47
    File: M - 3SUM.cpp
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
        vi freq(10, 0);
        fr(i, 0, n)
        {
            int x;
            cin >> x;
            freq[x % 10]++;
        }

        bool found = false;
        fr(i, 0, 10 && !found)
            fr(j, i, 10 && !found)
                fr(k, j, 10 && !found) if ((i + j + k) % 10 == 3)
        {
            int need_i = i == j ? 2 : 1;
            int need_j = j == k ? need_i + 1 : need_i;
            if (freq[i] >= 1 && freq[j] >= (i == j ? 2 : 1) && freq[k] >= (k == j ? need_j : 1))
                found = true;
        }

        if (found)
            yes;
        else
            no;
    }

    return 0;
}

// Problem : https://codeforces.com/contest/1692/problem/F
// Solution : https://vjudge.net/solution/52361845