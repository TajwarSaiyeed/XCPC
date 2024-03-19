#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isAnagram(int alp[])
    {
        for (int i = 0; i < 26; i++)
        {
            if (alp[i] != 0)
                return false;
        }
        return true;
    }

    int search(string pat, string txt)
    {
        int ans = 0, patSize = pat.size(), txtSize = txt.size();
        int l = 0, r = 0;
        int alp[26] = {0};
        for (char ch : pat)
        {
            alp[ch - 'a']++;
        }
        while (r < txtSize)
        {
            alp[txt[r] - 'a']--;
            if (r - l + 1 == patSize)
            {
                if (isAnagram(alp))
                    ans++;
                alp[txt[l] - 'a']++;
                l++;
                r++;
            }
            else
            {
                r++;
            }
        }
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}

// Submission: https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1?_gl=1*2hl6h9*_ga*MTYxMTcwOTY2OC4xNjYwMzk1MzY0*_ga_DWCCJLKX3X*MTY5Njc3NDQzNi4xLjEuMTY5Njc3NDUwNy4wLjAuMA..