//Question: Middle of the Linked List

//Link: https://leetcode.com/problems/middle-of-the-linked-list/

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

struct Node {
      int val;
      Node *next;
      Node() : val(0), next(NULL) {}
      Node(int x) : val(x), next(NULL) {}
      Node(int x, Node *next) : val(x), next(next) {}
};
 

Node* middleNode(Node* head) {
  Node *flag2 = head;
  Node *flag = head;
  while(flag2 && flag2->next){
      flag2=flag2->next->next;
      flag = flag->next;
  }
  return flag;
}

void solve(){
  //Create LinkList
  //middleNode(head)
}

int main() {
    IOS;
    testcase{
      solve();
    }
    return 0;
}