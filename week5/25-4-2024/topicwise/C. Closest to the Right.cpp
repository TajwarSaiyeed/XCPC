/*
    Author: Tajwar Saiyeed
    Date: 2024-04-25 21:45:31
    File: C. Closest to the Right.cpp
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

    int n, k;
    cin >> n >> k;

    vi a(n);
    fr(i, 0, n) cin >> a[i];

    while (k--)
    {
        int key;
        cin >> key;
        int l = 0, r = n - 1, mid, ans = n;
        while (l <= r)
        {
            mid = (l + r) / 2;

            if (key <= a[mid])
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        cout << ans + 1 << '\n';
    }

    return 0;
}

// Problem : https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C