/*
    Author: Tajwar Saiyeed
    Date: 2024-04-16 21:51:10
    File: M - NASA.cpp
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

const int maxN = (1 << 15);
vi all_palindromes;

void mark_palindrome()
{
    fr(i, 0, maxN)
    {
        string s = to_string(i);
        int len = s.length();
        bool ok = true;
        fr(i, 0, len / 2)
        {
            if (s[i] != s[len - i - 1])
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            all_palindromes.push_back(i);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    mark_palindrome();

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vi cnt(maxN), a;
        fr(i, 0, n)
        {
            int x;
            cin >> x;
            cnt[x]++;
            a.push_back(x);
        }

        ll ans = n;

        fr(i, 0, n)
        {
            fr(j, 0, all_palindromes.size())
            {
                int curr = (a[i] ^ all_palindromes[j]);
                ans += cnt[curr];
            }
        }

        cout << (ans / 2) << '\n';
    }

    return 0;
}

// Problem : https://www.codechef.com/problems/PALIXOR
// Submission : https://vjudge.net/solution/50686905