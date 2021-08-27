//Storing Frequency Using Map

#include<string>
#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define whatis(x) cout << #x << " = " << x << endl;
#define whatis2(x, y) cout << #x << " = " << x << " and " << #y << " = " << y << endl;
#define MOD 1000000007
#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define testcase   \
  long long testn; \
  cin >> testn;    \
  while (testn--)
#define all(x) x.begin(), x.end(),
#define pb push_back
#define loop(i, n) for (ll i = 0; i < n; i++)
#define loopn(i, n) for (ll i = 0; i <= n; i++)
#define loop1(i, n) for (ll i = 1; i < n; i++)
#define loop1n(i, n) for (ll i = 1; i <= n; i++)

using namespace std;

void solve()
{
  unordered_map <char, int> m;
  vector<int> v;
  loop(i, 10)
      v.pb(i);
  for(int i : v)
    cout << i;
  string s;
  cin >> s;
  loop(i, s.length())
    ++m[s[i]];
  for(auto i : m)
    cout << i.first << " " << i.second << endl;
  cout << "int max " << INT_MIN;
}

int main()
{
  solve();
  return 0;
}