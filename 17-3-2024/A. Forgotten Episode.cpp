/*
    Author: Tajwar Saiyeed
    Date: 2024-03-17 17:23:55
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int frq[n + 1] = {0};
    int arr[n];

    for (int i = 1; i <= n - 1; i++)
    {
        cin >> arr[i];
        frq[arr[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (frq[i] == 0)
            cout << i << endl;
    }

    return 0;
}

// Problem :  https://codeforces.com/problemset/problem/440/A
// Submission : https://vjudge.net/solution/49935943