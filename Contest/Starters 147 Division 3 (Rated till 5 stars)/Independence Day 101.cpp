/*
    Author: Tajwar Saiyeed
    Date: 2024-08-14 20:37:19
    File: Independence Day 101.cpp

    On the occasion of Independence Day, Chef wants to design a new flag for the country of Chefland.

He has some equal-sized strips in three different colors and needs to arrange them in a line so that no two adjacent strips share the same color.

Given that Chef has
A
A orange strips,
B
B white strips, and
C
C green strips, determine if it is possible to design such a flag using all the strips.

Input Format
The first line of input will contain a single integer
T
T, denoting the number of test cases.
Each test case consists of three space-separated integers
A
,
B
,
A,B, and
C
C — the number of strips of orange, white, and green color respectively.
Output Format
For each test case, output on a new line, YES, if it is possible to design a flag using all the strips such that no two adjacent strips share the same color. Otherwise, print NO.

You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

Constraints
1
≤
T
≤
1000
1≤T≤1000
1
≤
A
,
B
,
C
≤
10
1≤A,B,C≤10
Sample 1:
Input
Output
3
1 1 1
2 3 10
2 3 4
YES
NO
YES
Explanation:
Let
O
,
W
,
O,W, and
G
G denote one orange, white, and green strip respectively.

Test case
1
1: Consider the flag
O
W
G
OWG where all strips are used and no two adjacent strips have the same color.

Test case
2
2: It can be shown that Chef cannot design a flag with all the strips.

Test case
3
3: Consider the flag
G
W
G
O
W
G
O
W
G
GWGOWGOWG where all strips are used and no two adjacent strips have the same color.
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
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

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a + b + c;
    int mx = max({a, b, c});
    if (mx <= sum - mx + 1)
        yes;
    else
        no;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}

// Problem :