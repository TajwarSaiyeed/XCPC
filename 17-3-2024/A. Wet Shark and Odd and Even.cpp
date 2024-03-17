/*
    Author: Tajwar Saiyeed
    Date: 2024-03-17 19:18:27
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;

    vector<ll> arr(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum % 2 == 0)
        cout << sum << '\n';
    else
    {
        sort(arr.begin(), arr.end());
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                sum -= arr[i];
                break;
            }
        }
        cout << sum << '\n';
    }
    return 0;
}

// Problem : https://codeforces.com/problemset/problem/621/A
// Submission : https://vjudge.net/solution/49935974