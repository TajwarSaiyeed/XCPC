/*
    Author: Tajwar Saiyeed
    Date: 2024-03-17 22:44:06
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        vector<int> arr(n);
        vector<int> frq(n + 1, 0);
        set<int> threeCnt;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            frq[arr[i]]++;
            if (frq[arr[i]] >= 3)
            {
                threeCnt.insert(arr[i]);
            }
        }

        if (threeCnt.size() == 0)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << *threeCnt.begin() << '\n';
        }
    }
    return 0;
}
