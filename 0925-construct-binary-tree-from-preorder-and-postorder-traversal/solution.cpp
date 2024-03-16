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
TreeNode*build(vector<int>&pre,int plo,int phi,vector<int>&post,int poslo,int poshi){
    if(plo>phi || poslo>poshi)return NULL;
    TreeNode*root=new TreeNode(pre[plo]);
    if(plo==phi || poslo==poshi)return root;
    int i=poslo;
    while(i<=poshi){
    if(post[i]==pre[plo+1])break;
    i++;
    }
    int lc=i-poslo+1;
    int rc=poshi-i;

    root->left=build(pre,plo+1,plo+lc,post,poslo,i);
    root->right=build(pre,plo+lc+1,phi,post,i+1,poshi);
    return root;

}
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        int n=preorder.size();
        return build(preorder,0,n-1,postorder,0,n-1);
    }
};
