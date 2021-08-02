//Question: Reverse a linked list

//Link : https://www.geeksforgeeks.org/reverse-a-linked-list/

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

struct node{
  int data;
  node *next;
  node(int d){
    data = d;
    next = NULL;
  }
};

node *head = NULL;

void push_end(int d){
  node *temp = new node(d);
  if(head == NULL){
    head = temp;
  }
  else{
    node *flag = head;
    while(flag->next){
      flag = flag->next;
    }
    flag->next = temp;
  }
}

node* reverse(node* head)
{
  node* prev = NULL;
  node* curr = head;
  while(curr!=NULL){
    node* temp = curr->next;
    curr->next = prev;
    prev = curr;
    curr = temp;
  }
  node* flag = prev;
  while(flag){
    cout<<" "<< flag->data;
    flag=flag->next;
  }
  cout<<endl;
  return prev;
}

void display(){
   node *flag = head;
    while(flag){
      cout<<" "<<flag->data;
      flag = flag->next;
    }
    cout<<endl;
}

void solve(){
  cout<<"Enter value:";
  int d;
  cin>>d;
  push_end(d);
}

int main() {
  int n;
  cin>>n;
  loop(i,n)
    solve();
  cout<<"The original LL is :";
  display();
  cout<<"The reversed LL is :";
  reverse(head);
  return 0;
}