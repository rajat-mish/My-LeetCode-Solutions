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
 void preorder(TreeNode*root,vector<int>&v,int level){
    if(root==NULL)return;
    v[level]=root->val;
    preorder(root->left,v,level+1);
    preorder(root->right,v,level+1);
 }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v(levels(root),0);
        preorder(root,v,0);
        return v;
    }
};
