/*
    Author: Tajwar Saiyeed
    Date: 2024-03-15 11:48:25
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int l = 0, r = 0;
    ll ans = 0;

    while (l < n && r < m)
    {
        int cnt1 = 0, cnt2 = 0, current = a[l];
        while (a[l] == current && l < n)
        {
            cnt1++;
            l++;
        }

        while (b[r] < current && r < m)
        {
            r++;
        }

        while (b[r] == current && r < m)
        {
            cnt2++;
            r++;
        }

        ans += (1LL * cnt1 * cnt2);
    }

    cout << ans << '\n';
    return 0;
}