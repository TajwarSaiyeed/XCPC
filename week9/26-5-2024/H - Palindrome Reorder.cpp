/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 15:18:04
    File: H - Palindrome Reorder.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define p1 cout << '1'
#define p0 cout << '0'
#define nl '\n'
#define vll vector<ll>
#define vi vector<int>
#define vs vector<string>
#define fr(i, ivalue, n) for (int i = ivalue; i < n; i++)
#define nfr(i, ivalue, n) for (int i = ivalue; i > n; i--)
#define srt(vll) sort(vll.begin(), vll.end())
#define srtG(vll) sort(vll.begin(), vll.end(), greater<ll>())
#define mps map<string, int>
#define dt(n) fixed << setprecision(n)
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str, fHalf = "", sHalf = "", mid = "";
    cin >> str;

    int n = str.size(), freq[26] = {0}, odd = 0;
    fr(i, 0, n) freq[str[i] - 'A']++;
    fr(i, 0, 26) if (freq[i] % 2 == 1) odd++;

    if (odd > 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    fr(i, 0, 26) if (freq[i] % 2 == 0)
        fr(j, 0, freq[i] / 2)
    {
        fHalf += (char)(i + 'A');
        sHalf += (char)(i + 'A');
    }
    else
    {
        fr(j, 0, freq[i] / 2)
        {
            fHalf += (char)(i + 'A');
            sHalf += (char)(i + 'A');
        }
        mid = (char)(i + 'A');
    }

    reverse(sHalf.begin(), sHalf.end());

    cout << fHalf << mid << sHalf;

    return 0;
}

// Problem : https://cses.fi/problemset/task/1755
// Submission : https://vjudge.net/solution/51495974