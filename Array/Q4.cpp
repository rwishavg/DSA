//Question: Sort an array of 0s, 1s and 2s

//Link: https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1 

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

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> ans;
    loop(i, n){
        cin >> v[i];
    }
    loop(i, n){
        if(v[i] == 0)
          ans.pb(v[i]);
    }
    loop(i, n){
        if(v[i] == 1)
          ans.pb(v[i]);
    }
    loop(i, n){
        if(v[i] == 2)
          ans.pb(v[i]);
    }
    loop(i, n){
        cout << ans[i] << " ";
    }
}           


int main() {
    IOS;
    testcase{
      solve();
    }
    return 0;
}