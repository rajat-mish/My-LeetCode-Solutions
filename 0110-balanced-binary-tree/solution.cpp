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
int lev(TreeNode*root){
    if(root==NULL)return 0;
    return 1+max(lev(root->left),lev(root->right));
}
bool fun(TreeNode*root){
      int n=0,m=0;
        if(root==NULL)return true;
       
      
        if(root->left) n=lev(root->left);
        if(root->right) m=lev(root->right);
        if(abs(n-m)>1)return false;
        
       return fun(root->left)&& fun(root->right);
       
}
    bool isBalanced(TreeNode* root) {
        return fun(root);
    }
};
