/*
    Author: Tajwar Saiyeed
    Date: 2024-04-02 23:14:36
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

    int oneDayMinutes = 24 * 60;

    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int totalMinutes = x * y;
        int availableMinutes = z * oneDayMinutes;

        if (totalMinutes <= availableMinutes)
            yes;
        else
            no;
    }

    return 0;
}