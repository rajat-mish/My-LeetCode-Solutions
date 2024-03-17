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
TreeNode*helper(TreeNode*root,int val){
   
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
            helper(root->left,val);
        }
    }
    else{
        if(root->right==NULL){
            root->right=temp;
        }
        else{
            helper(root->right,val);
        }
    }
    return root;
}
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        return helper(root,val);
    }
};
