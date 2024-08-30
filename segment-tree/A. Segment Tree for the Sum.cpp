/*
    Author: Tajwar Saiyeed
    Date: 2024-08-30 05:41:36
    File: A. Segment Tree for the Sum.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define fr(i, ivalue, n) for (int i = ivalue; i < n; ++i)
typedef long long ll;

const int MAXN = 1e5 + 9;
ll arr[MAXN], t[4 * MAXN];

void build(int node, int begin, int end)
{
    if (begin == end)
    {
        t[node] = arr[begin];
        return;
    }
    int mid = (begin + end) / 2, left_child = 2 * node, right_child = 2 * node + 1;

    build(left_child, begin, mid);
    build(right_child, mid + 1, end);
    t[node] = t[left_child] + t[right_child];
}

void update(int node, int begin, int end, int index, int value)
{
    // Outer
    if (index < begin or index > end)
        return;

    // Inner
    if (begin == end)
    {
        t[node] = value;
        return;
    }

    int mid = (begin + end) / 2, left_child = 2 * node, right_child = 2 * node + 1;

    // Intersect
    update(left_child, begin, mid, index, value);
    update(right_child, mid + 1, end, index, value);
    t[node] = t[left_child] + t[right_child];
}

ll query(int node, int begin, int end, int left, int right)
{
    if (end < left or begin > right)
        return 0;

    if (begin >= left and end <= right)
        return t[node];

    int mid = (begin + end) / 2, left_child = 2 * node, right_child = 2 * node + 1;
    return query(left_child, begin, mid, left, right) + query(right_child, mid + 1, end, left, right);
}

void solve()
{
    int n, m;
    cin >> n >> m;
    fr(i, 1, n + 1) cin >> arr[i];
    build(1, 1, n);

    while (m--)
    {
        int option, i, v, left, right;
        cin >> option;
        if (option == 1)
        {
            cin >> i >> v;
            i++;
            update(1, 1, n, i, v);
        }
        else
        {
            cin >> left >> right;
            left++;
            ll ans = query(1, 1, n, left, right);
            cout << ans << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}

// Problem : https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/A
