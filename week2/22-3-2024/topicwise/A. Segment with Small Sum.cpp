/*
    Author: Tajwar Saiyeed
    Date: 2024-03-22 19:38:57
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, s;
    cin >> n >> s;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll left = 0, right = 0, ans = 0, sum = 0;

    while (right < n)
    {
        sum += a[right];

        if (sum <= s)
        {
            ans = max(ans, right - left + 1);
        }
        else
        {
            sum -= a[left];
            left++;
        }

        right++;
    }

    cout << ans << "\n";

    return 0;
}

// Problem : https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A