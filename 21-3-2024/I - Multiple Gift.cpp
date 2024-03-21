/*
  Author: Tajwar Saiyeed
  Date: 2024-03-21 21:16:46
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  ll x, y;

  cin >> x >> y;

  ll ans = 0;

  while (x <= y)
  {
    x *= 2;
    ans++;
  }

  cout << ans << "\n";

  return 0;
}

// Problem : https://atcoder.jp/contests/abc083/tasks/arc088_a
// Submission: https://vjudge.net/solution/50049067