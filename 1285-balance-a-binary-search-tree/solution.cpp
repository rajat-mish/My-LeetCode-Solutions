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
void inorder(TreeNode*root,vector<int>&v){
    if(root==NULL)return;
    inorder(root->left,v);
    v.push_back(root->val);
    inorder(root->right,v);
}

 TreeNode* helper(vector<int>& nums,int l,int h){
    int m=l+(h-l)/2;
    if(l>h)return NULL;
    TreeNode*root=new TreeNode(nums[m]);
    root->left=helper(nums,l,m-1);
    root->right=helper(nums,m+1,h);
    return root;
 }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>v;
        inorder(root,v);
       return helper(v,0,v.size()-1);

    }
};
