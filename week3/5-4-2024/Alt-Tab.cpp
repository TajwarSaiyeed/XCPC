/*
    Author: Tajwar Saiyeed
    Date: 2024-04-05 23:04:57
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
    vector<string> v;
    map<string, int> mp;

    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
        mp[s]++;
    }

    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (mp[v[i]] >= 1)
        {
            cout << v[i].substr(v[i].size() - 2, v[i].size() - 1);
            mp[v[i]] = 0;
        }
    }

    return 0;
}