/*
    Author: Tajwar Saiyeed
    Date: 2024-07-16 22:52:32
    File: D - Kalindrome Array.cpp
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

bool is_palindrome(vll &arr)
{
    int n = arr.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
            return false;
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;
    vll arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool palindrome = true;
    int x, y;
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            x = arr[i];
            y = arr[n - i - 1];
            palindrome = false;
            break;
        }
    }
    if (palindrome)
    {
        yes;
    }
    else
    {
        vll arr1, arr2;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != x)
                arr1.push_back(arr[i]);

            if (arr[i] != y)
                arr2.push_back(arr[i]);
        }

        if (is_palindrome(arr1) || is_palindrome(arr2))
            yes;
        else
            no;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}

// Problem : https://codeforces.com/contest/1610/problem/B
// Submission : https://vjudge.net/solution/52688115