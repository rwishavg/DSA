//Question:

//Code:
#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define whatis(x) cout << #x << " = " << x << endl;
#define whatis2(x, y) cout << #x << " = " << x << " and " << #y << " = " << y << endl;
#define MOD 1000000007
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define testcase     \
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

vector <ll> dp;

ll fib(int n){
    if (n <= 1) 
      return dp[n] = n;
    if(dp[n] != -1) 
      return dp[n];
    dp[n] = fib(n-1) + fib(n-2);
    return dp[n];
}

void solve(){
  int n;
  cin>>n;
  dp.clear();
  dp.resize(n + 1, -1);
  cout<<fib(n);
}

int main() {
    IOS;
    testcase{
      solve();
    }
    return 0;
}