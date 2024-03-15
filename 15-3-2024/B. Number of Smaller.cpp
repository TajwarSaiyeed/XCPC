/*

B. Number of Smaller
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given two arrays, sorted in non-decreasing order. For each element of the second array, find the number of elements in the first array strictly less than it.

Input
The first line contains integers n
 and m
, the sizes of the arrays (1≤n,m≤105
). The second line contains n
 integers ai
, elements of the first array, the third line contains m
 integers bi
, elements of the second array (−109≤ai,bi≤109
).

Output
Print m
 numbers, the number of elements of the first array less than each of the elements of the second array.

Example
inputCopy
6 7
1 6 9 13 18 18
2 3 8 13 15 21 25
outputCopy
1 1 2 3 4 6 6
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int l = 0, r = 0, ans = 0;

    while (r < m)
    {
        while (b[r] > a[l] && l < n)
        {
            ans++;
            l++;
        }
        r++;
        cout << ans << " ";
    }
    return 0;
}

// Accepted