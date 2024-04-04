/*
    Author: Tajwar Saiyeed
    Date: 2024-04-04 21:48:14
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

int x, y;

ll max_sum(ll i, ll j, vector<vector<ll>> &arr)
{
    ll sum = 0;
    for (ll k = 0; k < x; k++)
    {
        for (ll l = 0; l < y; l++)
        {
            if (abs(k - i) == abs(l - j))
            {
                sum += arr[k][l];
            }
        }
    }
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        cin >> x >> y;
        vector<vector<ll>> arr(x, vector<ll>(y));
        fr(i, x)
        {
            fr(j, y)
            {
                cin >> arr[i][j];
            }
        }

        ll max_s = 0;
        fr(i, x)
        {
            fr(j, y)
            {
                max_s = max(max_s, max_sum(i, j, arr));
            }
        }

        cout << max_s;
        nl;
    }

    return 0;
}