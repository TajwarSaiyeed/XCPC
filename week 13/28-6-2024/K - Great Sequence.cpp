/*
    Author: Tajwar Saiyeed
    Date: 2024-06-28 21:28:31
    File: K - Great Sequence.cpp
*/
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define yes cout << "YES"<<'\n'
#define no cout << "NO"<<'\n'
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
        int n, x;
        cin >> n >> x;
        vi a(n);
        fr(i, 0, n) cin >> a[i];
        sort(a.begin(), a.end());
        
        map<int, int> cnt;
        for (auto i : a) cnt[i]++;

        int ans = 0;

        fr (i, 0, n) {
            if (cnt[a[i]] == 0) continue;
            if (a[i] % x == 0 && cnt[a[i] / x] > 0) {
                cnt[a[i] / x]--;
            } else {
                ans++;
            } 
            cnt[a[i]]--;
        }

        cout << ans << nl;
    }
    
    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1641/A