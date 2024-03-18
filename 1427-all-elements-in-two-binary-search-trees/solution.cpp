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

void inorder(TreeNode*root1,vector<int>&v){
    if(root1==NULL)return;
    inorder(root1->left,v);
    v.push_back(root1->val);
    inorder(root1->right,v);

}
void inorde(TreeNode*root2,vector<int>&v){
    if(root2==NULL)return;
    inorder(root2->left,v);
    v.push_back(root2->val);
    inorder(root2->right,v);

}



class Solution {
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>v;
       inorder(root1,v);
       inorde(root2,v);
       sort(v.begin(),v.end());
       return v;
    }
};
