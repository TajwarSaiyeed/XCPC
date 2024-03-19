/*
    Author: Tajwar Saiyeed
    Date: 2024-03-19 15:01:42
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        ll firework1 = c / a;

        ll firework2 = c / b;

        cout << firework1 + firework2 + 2 << endl;
    }
    return 0;
}
