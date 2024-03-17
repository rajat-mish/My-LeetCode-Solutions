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
TreeNode*help(TreeNode*root,int val){
   
    TreeNode*temp=new TreeNode(val);
     if(root==NULL){
        root=temp;
        return root;
     }
    if(root->val>val){
        if(root->left==NULL){
            root->left=temp;
        }
        else{
            help(root->left,val);
        }
    }
    else{
        if(root->right==NULL){
            root->right=temp;
        }
        else{
            help(root->right,val);
        }
    }
    return root;
}

    TreeNode* bstFromPreorder(vector<int>& nums) {
       TreeNode*root=new TreeNode(nums[0]);
       for(int i=1;i<nums.size();i++){
        
        help(root,nums[i]);
       }
       return root;
    }
};
