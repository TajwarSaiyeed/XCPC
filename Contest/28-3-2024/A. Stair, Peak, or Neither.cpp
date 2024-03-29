/*
    Author: Tajwar Saiyeed
    Date: 2024-03-28 21:04:24
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a < b && b < c)
        {
            cout << "STAIR" << '\n';
        }
        else if (a < b && b > c)
        {
            cout << "PEAK" << '\n';
        }
        else
        {
            cout << "NONE" << '\n';
        }
    }

    return 0;
}