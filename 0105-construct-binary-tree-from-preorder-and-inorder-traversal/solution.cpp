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
TreeNode* build(vector<int>&pre,int plo,int phi,vector<int>&in,int inlo,int inhi){
    if(plo>phi)return NULL;

    TreeNode*root=new TreeNode(pre[plo]);
    if(plo==phi)return root;
    int i=inlo;
    while(i<=inhi){
          if(in[i]==pre[plo])break;
          i++;
    }

    int lc=i-inlo;
    int rc=inhi-i;
    root->left=build(pre,plo+1,plo+lc,in,inlo,i-1);
    root->right=build(pre,plo+lc+1,phi,in,i+1,inhi);
    return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();
       return build(preorder,0,n-1,inorder,0,n-1);
        
    }
};
