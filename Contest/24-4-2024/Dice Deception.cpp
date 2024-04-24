/*
    Author: Tajwar Saiyeed
    Date: 2024-04-24 21:25:08
    File: Dice Deception.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define p1 cout << '1'
#define p0 cout << '0'
#define nl cout << '\n'
#define vll vector<ll>
#define vi vector<int>
#define vs vector<string>
#define fr(i, ivalue, n) for (int i = ivalue; i < n; i++)
#define nfr(i, ivalue, n) for (int i = ivalue; i > n; i--)
#define srtG(vll) sort(a.begin(), a.end(), greater<ll>())
#define mps map<string, int>
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;

    while (tc--)
    {
        ll diceCount, flipCount;
        cin >> diceCount >> flipCount;
        vector<ll> diceValues(diceCount);
        fr(i, 0, diceCount) cin >> diceValues[i];
        sort(diceValues.begin(), diceValues.end());
        ll totalScore = 0;
        fr(i, 0, diceCount)
        {
            ll currentValue = diceValues[i];
            if (currentValue == 1 || currentValue == 2 || currentValue == 3)
            {
                if (flipCount > 0)
                {
                    flipCount--;
                    totalScore += abs(7 - currentValue);
                }
                else
                    totalScore += currentValue;
            }
            else
                totalScore += currentValue;
        }
        cout << totalScore << "\n";
    }
    return 0;
}