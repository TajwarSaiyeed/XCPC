/*
    Author: Tajwar Saiyeed
    Date: 2024-05-29 18:01:56
    File: D - Graph Cost.cpp
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
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        stack<int> value;
        stack<int> index;
        long long total_cost = 0;

        for (int i = 0; i < n; i++)
        {
            while (value.size() > 1 && value.top() > a[i])
            {
                int cur = value.top();
                value.pop();
                if (cur >= value.top())
                {
                    index.pop();
                }
                else
                {
                    value.push(cur);
                    break;
                }
            }
            value.push(a[i]);
            index.push(i);
        }

        int last_item = value.top();
        value.pop();
        int last_index = index.top();
        index.pop();

        while (!index.empty())
        {
            total_cost += max(last_item, value.top()) * (last_index - index.top());
            last_item = value.top();
            value.pop();
            last_index = index.top();
            index.pop();
        }

        cout << total_cost << "\n";
    }

    return 0;
}

// Problem : https://www.codechef.com/problems/GRAPHCOST
// Submission : https://vjudge.net/solution/51536388