/*
    Author: Tajwar Saiyeed
    Date: 2024-04-05 23:05:24
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl cout << '\n'
#define vll vector<ll>
#define vi vector<int>
#define fr(i, ivalue, n) for (int i = ivalue; i < n; i++)
#define nfr(i, ivalue, n) for (int i = ivalue; i > n; i--)
#define srtG(vll) sort(a.begin(), a.end(), greater<ll>())
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
        string s;
        cin >> s;

        vll a(n);
        ll mn = 0, total = 0;

        fr(i, 0, n)
        {
            ll L = i, R = n - i - 1;

            if (s[i] == 'R')
            {
                if (L > R)
                {
                    mn++;
                    total += L;
                    a.push_back(L - R);
                }
                else
                {
                    total += R;
                }
            }
            else
            {
                if (R > L)
                {
                    mn++;
                    total += R;
                    a.push_back(R - L);
                }
                else
                {
                    total += L;
                }
            }
        }

        vll f_arr(n + 1);
        fr(i, mn, n + 1) f_arr[i] = total;
        srtG(a);
        nfr(i, mn - 1, 0)
        {
            total -= a[i];
            f_arr[i] = total;
        }
        fr(i, 1, n + 1) cout << f_arr[i] << " ";
        nl;
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1722/D
// Submission : https://vjudge.net/solution/50496989