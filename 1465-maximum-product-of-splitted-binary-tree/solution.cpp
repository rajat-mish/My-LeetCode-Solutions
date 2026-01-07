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
long long tot;
 long long ans=0;
 const int mod=1e9+7;


long long solve(TreeNode*root){
    if(!root)return 0;
   
   
        
        int ls=solve(root->left);
        int rs=solve(root->right);
        int sum=ls+rs+root->val;
        ans=max(ans,(tot-sum)*sum);
        return sum;
        
    

}
    int maxProduct(TreeNode* root) {
  tot=solve(root);
  ans=0;
  solve(root);
  return ans%mod;
      

    }
};
