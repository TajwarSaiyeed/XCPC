/*
    Author: Tajwar Saiyeed
    Date: 2024-05-27 06:30:41
    File: I - Subarray Sums I.cpp
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
    ll n, x;
    cin >> n >> x;

    vll arr(n);
    fr(i, 0, n) cin >> arr[i];

    ll sum = 0, cnt = 0, left = 0, right = 0;

    while (right < n)
    {
        sum += arr[right];
        while (sum > x)
        {
            sum -= arr[left];
            left++;
        }
        if (sum == x)
        {
            cnt++;
        }
        right++;
    }

    cout << cnt << nl;

    return 0;
}

// Problem : https://cses.fi/problemset/task/1660/
// Submission : https://vjudge.net/solution/51503736