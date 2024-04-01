/*
    Author: Tajwar Saiyeed
    Date: 2024-03-31 23:46:42
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl cout << '\n'
#define vll vector<ll>
#define vi vector<int>
typedef long long ll;

bool is_palindrome(vll &arr)
{
    int n = arr.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {

        ll n;
        cin >> n;
        vll arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool palindrome = true;
        int x, y;
        for (int i = 0; i < n / 2; i++)
        {
            if (arr[i] != arr[n - i - 1])
            {
                x = arr[i];
                y = arr[n - i - 1];
                palindrome = false;
                break;
            }
        }
        if (palindrome)
        {
            yes;
        }
        else
        {
            vll arr1, arr2;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] != x)
                    arr1.push_back(arr[i]);

                if (arr[i] != y)
                    arr2.push_back(arr[i]);
            }

            if (is_palindrome(arr1) || is_palindrome(arr2))
                yes;
            else
                no;
        }
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1610/B
// Submission : https://vjudge.net/solution/50326564