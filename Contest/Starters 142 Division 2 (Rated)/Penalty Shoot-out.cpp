/*
    Author: Tajwar Saiyeed
    Date: 2024-07-10 20:31:26
    File: Penalty Shoot-out.cpp
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
        int x, y;
        cin >> x >> y;
        int mx_a = x + 2, mx_b = y + 1;
        bool flag = false;
        fr(i, x, mx_a + 1)
        {
            fr(j, y, mx_b + 1) if (i == j)
            {
                flag = true;
                break;
            }
            if (flag)
                break;
        }

        flag ? yes : no;
    }
    return 0;
}

// Problem : https://www.codechef.com/START142C/problems/PENALTYSHOOT