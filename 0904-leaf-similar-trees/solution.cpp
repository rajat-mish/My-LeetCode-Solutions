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
void helper(TreeNode* root,vector<int>&v){
    if(root==NULL)return;
    if(root->left==NULL && root->right==NULL)v.push_back(root->val);
    helper(root->left,v);
    helper(root->right,v);
}
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v;
        vector<int>u;

        helper(root1,v);
        helper(root2,u);
     if(v==u)return true;
     return false;

        // if(v.size()!=u.size())return false;
        // for(int i=0;i<v.size();i++){
        //     if(v[i]!=u[i]){
        //         return false;
        //     }
        // }
        // return true;
    }
};
