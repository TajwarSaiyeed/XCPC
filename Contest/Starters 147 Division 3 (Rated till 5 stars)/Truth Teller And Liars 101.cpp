/*
    Author: Tajwar Saiyeed
    Date: 2024-08-14 20:43:09
    File: Truth Teller And Liars 101.cpp

    You are a traveler and you are at a junction of
2
2 paths - one leads to eternal happiness, the other to certain doom.

There are a total of
N
+
M
N+M people,
N
N of which always tell the truth, while the remaining
M
M may tell the truth or lie. All of them are aware of which path leads to where.

You don't know who is a truth teller and who is not. You will ask some randomly chosen
X
X people the following question :

Which among the
2
2 paths leads to eternal happiness?
Is it possible for you to be sure which paths leads to eternal happiness?
If it is possible, find the minimal
X
X where you can be sure of the path regardless of which
X
X people you end up asking. Otherwise, print
−
1
−1.

Input Format
The first line of input will contain a single integer
T
T, denoting the number of test cases.
Each test case contains two space-separated integers
N
N and
M
M - the number of truth tellers, and the number of people who may or may not tell the truth.
Output Format
For each test case, output the following :

−
1
−1 if there is no way to figure out which path is the path to happiness.
Otherwise, print an integer
X

(
1
≤
X
≤
N
+
M
)
X (1≤X≤N+M), where
X
X is the minimum integer such that you can be sure of the path after asking any
X
X people.
Constraints
1
≤
T
≤
100
1≤T≤100
1
≤
N
,
M
≤
10
1≤N,M≤10
Sample 1:
Input
Output
2
2 1
1 2
3
-1
Explanation:
Test case
1
1 : It can be proven that asking
2
2 people is not sufficient as one of them could be the liar and give a different answer than the truth teller, and you can't know who is lying and who is not.

With all
3
3 responses, it is possible to figure out the correct path. For example, suppose the responses were Path
1
1, Path
1
1 and Path
2
2. Then you know that the correct path is Path
1
1.

Test case
2
2 : It can be proven to be impossible to figure out the correct path.
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
    int n, m;
    cin >> n >> m;
    cout << (n <= m ? -1 : m + m + 1) << endl;
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