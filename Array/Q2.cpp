//Question: Maximum and minimum of an array using minimum number of comparisons

//Link : https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/

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

struct Pair
{
  int max;
  int min;
};

struct Pair get_min_max(int a[], int n){
  Pair res;
  res.max = a[0];
  res.min = a[0];
  for(int i = 1; i < n; i++){
    if(a[i] > res.max)
      res.max = a[i];
    if(a[i] < res.min)
      res.min = a[i];
  }
  return res;
}

void solve(){
  int n;
  cin >> n;
  int a[n];
  loop(i, n){
    cin >> a[i];
  }
  Pair res = get_min_max(a, n);
  cout << res.max << " " << res.min << endl;
}

int main() {
    IOS;
    testcase{
      solve();
    }
    return 0;
}

//Time Complexity : O(n)
//Code fast typed using Github Copilot