//Question: Level Order Traversal, FreekaTree Series by Striver

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

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(NULL), right(NULL) {}
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode* right) : val(x), left(left), right(right) {}
};

vector <vector <int>> solve(TreeNode *root){
    vector<vector<int>> ans;
    if(root==NULL)
        return ans;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        vector<int> level;
        loop(i,size){
            TreeNode *node = q.front();
            cout<<node->val<<" ";
            q.pop();
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
            level.push_back(node->val);
        }
        ans.push_back(level);
    }
    return ans;
}

TreeNode* newNode(int val)
{
    TreeNode* temp = new TreeNode;
    temp->val = val;
    temp->left = temp->right = NULL;
    return temp;
}

int main() {
    IOS;
    testcase{
        TreeNode* root = newNode(1);
        root->left = newNode(2);
        root->right = newNode(3);
        root->left->left = newNode(4);
        root->left->right = newNode(5);
        cout << "Level Order traversal of binary tree is \n";
        solve(root);
    }
    return 0;
}