/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int levels(TreeNode*root){
    if(root==NULL)return 0;
    return 1+max(levels(root->left),levels(root->right));
}
void printNth(TreeNode*root,int cur,int n,vector<int>&v){
  if(root==NULL)return ;
  if(cur==n){
    v.push_back(root->val);
    return ;
  }
  printNth(root->left,cur+1,n,v);
  printNth(root->right,cur+1,n,v);

}
void lev(TreeNode*root,vector<vector<int>>&ans){
    int n=levels(root);
    for(int i=1;i<=n;i++){
        vector<int>v;
        printNth(root,1,i,v);
        ans.push_back(v);
    }
}
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        lev(root,ans);
        return ans;
    }
};
