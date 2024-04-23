/*
    Author: Tajwar Saiyeed
    Date: 2024-04-22 23:28:52
    File: L - Boxes.cpp
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
#define srt(vll) sort(a.begin(), a.end())
#define srtG(vll) sort(a.begin(), a.end(), greater<ll>())
#define mps map<string, int>
#define prq priority_queue<ll>
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--)
    {
        ll n;
        cin >> n;
        vll a(n);
        fr(i, 0, n) cin >> a[i];
        srt(a);

        prq pq;
        pq.push(a[n - 1]);

        nfr(i, n - 2, -1)
        {
            if (pq.top() < a[i])
                pq.push(a[i]);
            else
            {
                ll x = pq.top() ^ a[i];
                pq.pop();
                pq.push(x);
            }
        }

        cout << pq.size() << '\n';
    }

    return 0;
}

// Problem : https://www.codechef.com/problems/BOX95
// Submission : https://vjudge.net/solution/50846802