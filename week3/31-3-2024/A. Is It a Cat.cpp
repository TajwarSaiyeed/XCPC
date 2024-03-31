/*
    Author: Tajwar Saiyeed
    Date: 2024-03-31 23:25:42
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl cout << '\n'
#define vll vector<ll>
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < n; i++)
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
        string s, ns, target = "meow";
        cin >> s;

        if ((s[0] != 'm' && s[0] != 'M') || (s[n - 1] != 'w' && s[n - 1] != 'W') || n < 4)
        {
            no;
            continue;
        }

        bool flag = true;

        for (char ch : s)
        {
            if (ch != 'w' && ch != 'W' && ch != 'm' && ch != 'M' && ch != 'o' && ch != 'O' && ch != 'e' && ch != 'E')
            {
                flag = false;
                break;
            }
        }

        if (!flag)
        {
            no;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                ns += s[i];
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                ns += s[i] + 32;
            }
        }

        string temp = "";
        for (int i = 0; i < n; i++)
        {
            if (ns[i] != ns[i + 1])
            {
                temp += ns[i];
            }
        }

        if (temp == target)
        {
            yes;
        }
        else
        {
            no;
        }
    }
    return 0;
}

// Problem : https://codeforces.com/contest/1800/problem/A
// Submission : https://vjudge.net/solution/50320672