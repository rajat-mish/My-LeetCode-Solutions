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
void Nthlev(TreeNode*root,int cur,int n,int &sum){ 
    if(root==NULL)return ;
    if(cur==n){
      sum+=root->val;

    }
    Nthlev(root->left,cur+1,n,sum);
    Nthlev(root->right,cur+1,n,sum);
   
}
    int deepestLeavesSum(TreeNode* root) { int sum=0;
        int n=levels(root);
        Nthlev(root,1,n,sum);
       return sum;
    }
};
