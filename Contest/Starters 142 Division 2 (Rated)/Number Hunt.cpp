/*
    Author: Tajwar Saiyeed
    Date: 2024-07-10 21:43:28
    File: Number Hunt.cpp
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

bool not_prime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (ll i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

bool not_per_sqr(ll n)
{
    ll root = sqrt(n);
    return n == root * root;
}

bool no_fact(ll n, ll x)
{
    for (ll i = 2; i * i <= n; ++i)
        if (n % i == 0)
            if (i < x || (n / i < x && n / i != 1))
                return true;
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--)
    {
        ll x;
        cin >> x;
        ll y = x + 1;

        while (true)
        {
            if (!not_prime(y) && !not_per_sqr(y) && !no_fact(y, x))
                break;
            ++y;
        }

        cout << y << nl;
    }

    return 0;
}