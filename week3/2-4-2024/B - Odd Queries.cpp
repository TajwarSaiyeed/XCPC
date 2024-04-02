/*
    Author: Tajwar Saiyeed
    Date: 2024-04-02 21:32:59
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl cout << '\n'
#define vll vector<ll>
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, q, sum = 0;
        cin >> n >> q;

        vll a(n), prefixSum(n + 1, 0);
        fr(i, n)
        {
            cin >> a[i];
            sum += a[i];
            prefixSum[i + 1] = sum;
        }

        fr(i, q)
        {
            ll l, r, k;
            cin >> l >> r >> k;

            ll tempSum = prefixSum[r] - prefixSum[l - 1];

            ll xs = (sum - tempSum) + ((r - l + 1) * k);

            if (xs % 2 == 1)
            {
                yes;
            }
            else
            {
                no;
            }
        }
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1807/D
// Submission : https://vjudge.net/solution/50376072