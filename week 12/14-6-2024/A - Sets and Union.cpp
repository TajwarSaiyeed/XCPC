/*
    Author: Tajwar Saiyeed
    Date: 2024-06-14 16:32:23
    File: A - Sets and Union.cpp
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
        vector<set<int>> sets(n);
        set<int> union_all;

        fr(i, 0, n)
        {
            int k;
            cin >> k;
            fr(j, 0, k)
            {
                int x;
                cin >> x;
                sets[i].insert(x);
                union_all.insert(x);
            }
        }

        int mx = 0;

        int total_subsets = (1 << n);
        fr(m, 1, total_subsets)
        {
            set<int> current_union;
            fr(i, 0, n) if (m & (1 << i)) current_union.insert(sets[i].begin(), sets[i].end());
            if (current_union != union_all)
                mx = max(mx, (int)current_union.size());
        }

        cout << mx << endl;
    }
    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1882/B