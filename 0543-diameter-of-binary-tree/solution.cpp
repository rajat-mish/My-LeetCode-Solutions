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
int ans=INT_MIN;
int lev(TreeNode*root){
    if(root==NULL)return 0;
    return 1+max(lev(root->left),lev(root->right));
}

void fun(TreeNode*root){
        if(root==NULL)return;
        int n=lev(root->left);
        int m=lev(root->right);
        ans=max(ans,m+n);
        fun(root->left);
        fun(root->right);
}

    int diameterOfBinaryTree(TreeNode* root) {
           fun(root);
           return ans;
        
    }
};
