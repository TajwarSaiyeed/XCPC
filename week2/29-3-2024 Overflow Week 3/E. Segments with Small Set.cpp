/*
    Author: Tajwar Saiyeed
    Date: 2024-03-29 22:38:12
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

    int n;
    ll s;
    cin >> n >> s;
    vll a(n);
    fr(i, n) cin >> a[i];

    ll left = 0, right = 0, ans = 0;
    map<ll, ll> mp;

    while (right < n)
    {
        mp[a[right]]++;

        while (mp.size() > s)
        {
            mp[a[left]]--;
            if (mp[a[left]] == 0)
            {
                mp.erase(a[left]);
            }
            left++;
        }

        ans += right - left + 1;

        right++;
    }

    cout << ans << '\n';

    return 0;
}

// Problem : https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/E