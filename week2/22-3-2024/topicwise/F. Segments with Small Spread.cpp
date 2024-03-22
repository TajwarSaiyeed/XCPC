/*
    Author: Tajwar Saiyeed
    Date: 2024-03-22 19:48:35
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll left = 0, right = 0, ans = 0;
    multiset<ll> ml;

    while (right < n)
    {
        ml.insert(a[right]);
        ll mn, mx;
        mn = *ml.begin(), mx = *ml.rbegin();

        if ((mx - mn) <= k)
        {
            ans += (right - left + 1);
        }
        else
        {
            while (left < right)
            {
                mn = *ml.begin(), mx = *ml.rbegin();
                if ((mx - mn) <= k)
                {
                    break;
                }
                auto it = ml.find(a[left]);
                ml.erase(it);
                left++;
            }
            mn = *ml.begin(), mx = *ml.rbegin();
            if ((mx - mn) <= k)
            {
                ans += (right - left + 1);
            }
        }
        right++;
    }

    cout << ans << '\n';

    return 0;
}

// Problem : https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F