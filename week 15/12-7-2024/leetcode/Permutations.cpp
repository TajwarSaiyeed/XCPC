/*
    Author: Tajwar Saiyeed
    Date: 2024-07-12 21:17:30
    File: 46. Permutations.cpp
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

vector<vi> ans;
int sz = 0;

class Solution
{

private:
    void f(vi &nums, vi &a, int freq[])
    {
        if (nums.size() == a.size())
        {
            ans.push_back(a);
            return;
        }

        fr(i, 0, sz)
        {
            if (!freq[i])
            {
                freq[i] = 1;
                a.push_back(nums[i]);
                f(nums, a, freq);
                a.pop_back();
                freq[i] = 0;
            }
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        ans.clear();
        sz = nums.size();
        vi a;
        int freq[sz] = {0};
        f(nums, a, freq);
        return ans;
    }
};

void solve()
{
    Solution s;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans = s.permute(nums);
    for (auto x : ans)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << nl;
    }
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

// Problem : https://leetcode.com/problems/permutations