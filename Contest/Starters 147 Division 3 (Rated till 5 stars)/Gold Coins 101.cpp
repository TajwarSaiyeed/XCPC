/*
    Author: Tajwar Saiyeed
    Date: 2024-08-14 20:33:38
    File: Gold Coins 101.cpp

    Chef and Chefina are competing against each other in a football game where the player scoring the maximum goals, wins.

It is known that the winner of the game receives
A
A gold coins while the loser receives
B
B gold coins.
Given that Chef scored
X
X goals and Chefina scored
Y
Y goals
(
X
≠
Y
)
(X=Y), find the number of coins Chef would receive.

Input Format
The first and only line of input will contain four space-separated integers,
A
,
B
,
X
,
A,B,X, and
Y
Y, denoting the coins rewarded to winner, coins rewarded to loser, goals scored by Chef, and goals scored by Chefina respectively.

Output Format
Output a single integer denoting the number of coins Chef would receive.

Constraints
1
≤
B
<
A
≤
10
1≤B<A≤10
1
≤
X
,
Y
≤
5
,

X
≠
Y
1≤X,Y≤5, X=Y
Sample 1:
Input
Output
5 2 3 4
2
Explanation:
Chef scored
3
3 goals while Chefina scored
4
4 goals. Thus, Chef loses and gets
2
2 coins.

Sample 2:
Input
Output
7 6 5 1
7
Explanation:
Chef scored
5
5 goals while Chefina scored
1
1 goal. Thus, Chef wins and gets
7
7 coins.
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
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    if (x > y)
    {
        cout << a << nl;
    }
    else
    {
        cout << b << nl;
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

// Problem :