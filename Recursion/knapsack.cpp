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

  int W;
  int n;
  vector <int> v;
  vector <int> w;

int knap(int id, int wt){
  if(id>=w.size()) return 0;
  int ans = 0;
  if(wt + w[id]<=W){
    ans = max(ans, v[id] + knap(id+1, wt+w[id]));
  }
  ans = max(ans,0 + knap(id+1, wt));
  return ans;
}

void solve(){
    cin>>n;
    loop(i,n){
        cin>>v[i];
    }
    loop(i,n){
        cin>>w[i];
    }
    cin>>W;
    knap(0,0);
}

int main() {
    IOS;
    testcase{
      solve();
    }
    return 0;
}