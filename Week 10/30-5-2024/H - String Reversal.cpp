/*
    Author: Tajwar Saiyeed
    Date: 2024-05-30 21:46:59
    File: H - String Reversal.cpp
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

    int n;
    cin >> n;
    string s;
    cin >> s;
    string r = s;
    reverse(r.begin(), r.end());

    map<char, vector<int>> pos_s, pos_r;
    fr(i, 0, n)
    {
        pos_s[s[i]].push_back(i);
        pos_r[r[i]].push_back(i);
    }

    vi permutation(n);
    for (char ch = 'a'; ch <= 'z'; ch++)
        fr(i, 0, pos_s[ch].size())
            permutation[pos_r[ch][i]] = pos_s[ch][i];

    pbds<int> p;
    long long ans = 0;
    nfr(i, n - 1, -1)
    {
        ans += p.order_of_key(permutation[i]);
        p.insert(permutation[i]);
    }
    cout << ans << '\n';

    return 0;
}

// https://codeforces.com/problemset/problem/1430/E
// Submission : https://vjudge.net/solution/51571354