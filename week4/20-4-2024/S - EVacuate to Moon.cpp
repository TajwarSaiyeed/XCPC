/*
    Author: Tajwar Saiyeed
    Date: 2024-04-20 22:28:16
    File: S - EVacuate to Moon.cpp
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
#define srtG(vll) sort(vll.begin(), vll.end(), greater<ll>())
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
        ll N, P, H;
        cin >> N >> P >> H;
        vll a(N), b(P);
        fr(i, 0, N) cin >> a[i];
        fr(i, 0, P) cin >> b[i];
        srtG(a);
        srtG(b);
        ll ans = 0, mn = min(N, P);
        fr(i, 0, mn) ans += min(a[i], b[i] * H);
        cout << ans << '\n';
    }

    return 0;
}

// Problem : https://www.codechef.com/problems/MOONSOON
// Submission : https://www.codechef.com/viewsolution/1059965294