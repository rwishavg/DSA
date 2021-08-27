//  Maximum Size Subarray Sum Equals k
// Link https://www.lintcode.com/problem/911/

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

int maxSubArrayLen(vector<int> &nums, int k){
      unordered_map <int,int> m;
       int sum = 0;
       int mx = 0;
       for(int i = 0; i<nums.size();i++){
           sum+=nums[i];
           if(sum==k)
               mx = max(mx,i+1);
            else{
                int tar = sum -k;
                if(m.count(tar)>0)
                    mx = max(mx,i - m[tar]);
            }
            if(m.count(sum)==0)
                m[sum]=i;
       }
        return mx;
}

void solve(){
  int n;
  int k;
  cin >> n;
  vector<int> v(n);
  loop(i,n)
    cin >> v[i];
  cin >> k;
  cout << maxSubArrayLen(v, k);
}

int main() {
    IOS;
    testcase{
      solve();
    }
    return 0;
}