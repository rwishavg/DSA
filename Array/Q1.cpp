//Question :
//Write a program to reverse an array or string

//Link :
//  https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/


//CODE
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
  cin>>n;
  int arr[n];
  loop(i,n){
    cin>>arr[i];
  }
  //arr stores the original array
  int arr2[n];
  loop(i,n){
    arr2[i]=arr[n-1-i];
  }
  //arr2 stores the reversed array
  loop(i,n)
    cout<<arr2[i]<<" ";
  cout<<endl;
}

int main() {
    IOS;
    testcase{
      solve();
    }
    return 0;
}