/*
    Author: Tajwar Saiyeed
    Date: 2024-07-11 18:22:07
    File: L - Rudolf and the Another Competition.cpp
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
        ll n, m, h;
        cin >> n >> m >> h;

        vector<vi> times(n, vi(m));
        fr(i, 0, n) fr(j, 0, m) cin >> times[i][j];

        vector<pair<ll, pair<ll, ll>>> results;
        fr(ind, 0, n)
        {
            srt(times[ind]);
            ll score = 0, total_time = 0, penalty = 0;
            fr(i, 0, m) if (times[ind][i] + total_time <= h)
            {
                score += 1;
                total_time += times[ind][i];
                penalty += total_time;
            }
            else break;
            results.push_back({-score, {penalty, ind}});
        }

        srt(results);
        fr(i, 0, results.size()) if (results[i].second.second == 0)
        {
            cout << i + 1 << '\n';
            break;
        }
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1846/C
// Submission : https://vjudge.net/solution/52524561