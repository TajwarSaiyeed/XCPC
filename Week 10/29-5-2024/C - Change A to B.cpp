/*
    Author: Tajwar Saiyeed
    Date: 2024-05-29 17:50:01
    File: C - Change A to B.cpp
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

    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        int tem = b;
        int c = 0;
        while (tem > a)
        {
            if (tem % k == 0 && tem / k >= a)
                tem /= k, c++;
            else
            {
                if ((tem / k) < a)
                {
                    c += (tem - a);
                    tem -= (tem - a);
                }
                else
                    c += (tem % k), tem -= (tem % k);
                if (tem <= a)
                    break;
            }
        }

        cout << c << "\n";
    }

    return 0;
}

// Problem : https://www.codechef.com/problems/CHANGEXY
// Submission : https://vjudge.net/solution/51536169