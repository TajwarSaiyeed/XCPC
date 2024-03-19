/*
    Author: Tajwar Saiyeed
    Date: 2024-03-19 15:01:55
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
        ll a, b, c;
        cin >> a >> b >> c;

        ll extro = b % 3;

        if (extro + c >= 3 || extro == 0)
        {
            ll ans = a + ceil((b + c) / 3.0);

            cout << ans << endl;
        }
        else
            cout << -1 << endl;
    }

    return 0;
}