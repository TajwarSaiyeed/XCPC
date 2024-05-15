/*
    Author: Tajwar Saiyeed
    Date: 2024-05-15 20:42:19
    File: Rock Paper Scissors.cpp
*/
#include <bits/stdc++.h>
using namespace std;
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

    string s;
    cin >> s;

    ll wins = 0;
    ll i = 0;
    while (i < n - 1)
    {
      if (s[i] == s[i + 1])
      {
        i++;
        wins++;
      }
      i++;
    }

    cout << n - wins << nl;
  }

  return 0;
}