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
 TreeNode* helper(vector<int>& nums,int l,int h){
    int m=l+(h-l)/2;
    if(l>h)return NULL;
    TreeNode*root=new TreeNode(nums[m]);
    root->left=helper(nums,l,m-1);
    root->right=helper(nums,m+1,h);
    return root;
 }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
       return helper(nums,0,nums.size()-1);
        
    }
};
