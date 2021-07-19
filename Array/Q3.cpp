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
  set<int>::iterator it2 = s.begin();
  advance(it,k-1);
  advance(it2,n-k);
  cout<<"The kth smallest value is :";
  cout<<*it<<endl;
  cout<<"The kth largest value is :";
  cout<<*it2<<endl;
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

int k_largest(map<int,int>m, int k,int n){
  int freq=0;
  for(map<int,int>::iterator it=m.begin();it!=m.end();it++){
    if(freq==n-k-1){
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
  int ans2 = k_largest(m,k-1,n);
  cout<<"The kth smallest value is :";
  cout<<ans<<endl;
  cout<<"The kth largest value is :";
  cout<<ans2<<endl;
}

int main() {
   // IOS;
    testcase{
      solve(); //implememtation of kth smallest/largest element using maps
    }
    return 0;
}