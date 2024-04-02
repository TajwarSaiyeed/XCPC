

/*
    Author: Tajwar Saiyeed
    Date: 2024-04-02 23:31:26
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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        int tuesdayStart = 2;

        if (n < tuesdayStart)
        {
            cout << 0 << '\n';
            continue;
        }

        int x = 0;
        for (int i = 1; i < n; i += 7)
        {
            x++;
        }

        cout << x << '\n';
    }
    return 0;
}
