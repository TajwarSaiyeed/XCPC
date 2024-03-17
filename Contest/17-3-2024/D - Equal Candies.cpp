/*
    Author: Tajwar Saiyeed
    Date: 2024-03-17 23:23:36
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
        int x;
        cin >> x;
        vector<int> arr(x);
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        long long ans = 0;
        for (int i = 0; i < x; i++)
        {
            ans += arr[i] - arr[0];
        }
        cout << ans << '\n';
    }

    return 0;
}