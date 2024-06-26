/*
    Author: Tajwar Saiyeed
    Date: 2024-06-26 21:22:11
    File: Split Permutation.cpp
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
        ll n;
        cin >> n;

        if (n == 3)
        {
            cout << "1 2 3" << nl;
            continue;
        }

        fr(j, 1, (n / 2) + 1)
        {
            cout << j << " ";
            if (n % 2 == 0)
                cout << n - j + 1 << " ";
            else
                cout << n - j << " ";
        }

        if (n % 2 != 0)
        {
            cout << n;
        }
        cout << '\n';
    }

    return 0;
}