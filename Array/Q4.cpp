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

/* O(2n) solution
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    loop(i, n){
        cin >> v[i];
    }
    vector<int> v2;
    int a=0, b=0, c=0;
    loop(i, n){
        if(v[i] == 0){
            a++;
        }else if(v[i] == 1){
            b++;
        }else{
            c++;
        }
    }
    loop(i, a)
        v2.pb(0);
    loop(i, b)
        v2.pb(1);
    loop(i, c)
        v2.pb(2);
    loop(i, n){
        cout << v2[i] << " ";
    }
    cout << endl;
}
*/

//O(n) solution
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    loop(i, n){
        cin >> a[i];
    }
    int lo = 0;
    int hi = n - 1;
    int mid = 0;
 
    // Iterate till all the elements
    // are sorted
    while (mid <= hi) {
        switch (a[mid]) {
 
        // If the element is 0
        case 0:
            swap(a[lo++], a[mid++]);
            break;
 
        // If the element is 1 .
        case 1:
            mid++;
            break;
 
        // If the element is 2
        case 2:
            swap(a[mid], a[hi--]);
            break;
        }
    }
    loop(i,n)
        cout<<a[i]<<" ";
}

int main() {
    IOS;
    testcase{
      solve();
    }
    return 0;
}