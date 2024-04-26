/*
    Author: Tajwar Saiyeed
    Date: 2024-04-24 22:44:54
    File: B - Jumping on Tiles.cpp
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

class cmpsr1
{
public:
    bool operator()(pair<char, int> a, pair<char, int> b)
    {
        return a.second < b.second;
    }
};

class cmpsrt2
{
public:
    pair<char, int> a, b;
    char x, y;
    cmpsrt2(pair<char, int> a, pair<char, int> b, char x, char y)
    {
        this->a = a;
        this->b = b;
        this->x = x;
        this->y = y;
    }

    bool operator()(pair<char, int> a, pair<char, int> b)
    {
        if (x > y)
            return a.first > b.first;
        else
            return a.first < b.first;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--)
    {
        string s;
        cin >> s;
        int n = s.size();
        vector<pair<char, int>> v;

        char x = s[0], y = s[n - 1];

        char mn = min(x, y);
        char mx = max(x, y);

        fr(i, 0, n)
        {
            if (s[i] >= mn && s[i] <= mx)
                v.push_back({s[i], i});
        }

        sort(v.begin(), v.end(), cmpsr1());

        if (v.size() > 2)
            sort(v.begin() + 1, v.end() - 1, cmpsrt2(v[0], v[v.size() - 1], x, y));

        vi seq;
        ll moves = 0;
        seq.push_back(1);

        fr(i, 1, v.size())
        {
            moves += abs(v[i - 1].first - v[i].first);
            seq.push_back(v[i].second + 1);
        }

        cout << moves << " " << seq.size() << '\n';

        for (auto x : seq)
            cout << x << " ";

        nl;
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1729/C
// Solution : https://vjudge.net/solution/50911707