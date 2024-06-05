/*
    Author: Tajwar Saiyeed
    Date: 2024-06-05 21:23:21
    File: Large Differences.cpp
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
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, k;
        cin >> n >> k;

        vll a(n);
        fr(i, 0, n) cin >> a[i];

        ll sum = 0;
        fr(i, 0, n - 1) sum += abs(a[i] - a[i + 1]);

        ll mx_diff = sum;

        fr(i, 0, n)
        {
            ll temp = a[i];

            a[i] = 1;
            ll n_sum = 0;
            fr(j, 0, n - 1) n_sum += abs(a[j] - a[j + 1]);
            mx_diff = max(mx_diff, n_sum);

            a[i] = k;
            n_sum = 0;
            fr(j, 0, n - 1) n_sum += abs(a[j] - a[j + 1]);
            mx_diff = max(mx_diff, n_sum);

            a[i] = temp;
        }

        cout << mx_diff << '\n';
    }

    return 0;
}
