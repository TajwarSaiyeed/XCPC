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

const int maxN = 1e4;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vll pw;
    fr(i, 1, maxN + 1)
        pw.push_back(pow(i, 3));

    int tc;
    cin >> tc;

    while (tc--)
    {
        ll x;
        cin >> x;
        bool found = false;

        fr(i, 0, maxN)
        {
            if (pw[i] >= x)
                break;
            int l = 0, r = maxN - 1, mid;
            ll need = x - pw[i];
            bool ok = false;
            while (l <= r)
            {
                mid = l + (r - l) / 2;
                if (pw[mid] == need)
                {
                    ok = true;
                    break;
                }
                else if (pw[mid] > need)
                    r = mid - 1;
                else
                    l = mid + 1;
            }
            if (ok)
            {
                found = true;
                break;
            }
        }

        if (found)
            yes;
        else
            no;
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1490/C
// Solution : https://vjudge.net/solution/50978060