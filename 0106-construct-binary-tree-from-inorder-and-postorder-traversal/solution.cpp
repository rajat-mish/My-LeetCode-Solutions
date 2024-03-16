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
TreeNode*build(vector<int>in,int inlo,int inhi,vector<int>pos,int plo,int phi){
    if(plo>phi)return NULL;
    TreeNode* root=new TreeNode(pos[phi]);
    if(plo==phi)return root;
    int i=inlo;
    while(i<=inhi){
        if(in[i]==pos[phi])break;
        i++;
    }
    int lc=i-inlo;
    int rc=inhi-i;

    root->left=build(in,inlo,i-1,pos,plo,plo+lc-1);
    root->right=build(in ,i+1,inhi,pos,plo+lc,phi-1);
    return root;
}
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=inorder.size();
        return build(inorder,0,n-1,postorder,0,n-1);
    }
};
