/*
    Author: Tajwar Saiyeed
    Date: 2024-04-04 10:44:36
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl cout << '\n'
#define vll vector<ll>
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < n; i++)
#define nfr(i, n) for (int i = n - 1; i >= 0; i--)
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll remove_prefix = 0, n;
        cin >> n;
        ll arr[n];
        map<int, int> mp;
        fr(i, n) cin >> arr[i];
        nfr(i, n)
        {
            if (mp[arr[i]] == 0)
                remove_prefix++;
            else
                break;

            mp[arr[i]]++;
        }
        cout << n - remove_prefix << '\n';
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1714/B
// Submission : https://vjudge.net/solution/50447585