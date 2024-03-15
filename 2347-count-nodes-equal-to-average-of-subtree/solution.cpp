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
int helper(TreeNode*root){
    if(root==NULL)return 0;
    int sum=root->val+helper(root->left)+helper(root->right);
    return sum;
  
    

}
int size(TreeNode*root){
    if(root==NULL)return 0;
    return 1+size(root->left)+size(root->right);
}
    int averageOfSubtree(TreeNode* root) { int count=0;
        int a=helper(root);
        int b=size(root);
  if(root==NULL)return 0;
     if(root->val==a/b){
        count++;
     }
   return count+  averageOfSubtree(root->left)+ averageOfSubtree(root->right);
    
    }
};
