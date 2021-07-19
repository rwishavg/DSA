//Question: Kth smallest element in array where all elements are distinct

//Link : https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array/

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

//Using Set
void solve(){
  int n;
  int k;
  cout<<"Enter the number of elements :";
  cin>>n;
  int arr[n];
  cout<<"Enter elements :";
  loop(i,n){
    cin>>arr[i];
  }
  cout<<"Enter the value of k :";
  cin>>k;
  set<int>s(arr,arr+n);
  set<int>::iterator it = s.begin();
  advance(it,k-1);
  cout<<"The kth value is :";
  cout<<*it<<endl;
}

//Using Map
int k_smallest(map<int,int>m, int k){
  int freq=0;
  for(map<int,int>::iterator it=m.begin();it!=m.end();it++){
    if(freq==k-1){
      return it->first;
    }
    freq+=it->second;
  }
}


void solve2(){
  int n;
  int k;
  cout<<"Enter the number of elements :";
  cin>>n;
  int arr[n];
  cout<<"Enter elements :";
  loop(i,n){
    cin>>arr[i];
  }
  cout<<"Enter the value of k :";
  cin>>k;
  map<int,int>m;
  loop(i,n){
    m[arr[i]]++;
  }
  int ans = k_smallest(m,k);
  cout<<"The kth value is :";
  cout<<ans<<endl;
}

int main() {
   // IOS;
    testcase{
      solve2();
    }
    return 0;
}