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
 void pre(TreeNode*root,string s,int &ans){
    if(root==NULL){
          
         return;

    }
    s.push_back(root->val + '0');
 if(root->left==NULL && root->right==NULL){
     ans+=stoi(s);
     return ;
 }
   pre(root->left,s,ans);
   pre(root->right,s,ans);
 }


// void pre(TreeNode* root, string s, int &ans) {
//     if (root == nullptr) {
//          return;
//     }
//     s.push_back(root->val + '0'); // Convert integer to character
//     if (root->left == nullptr && root->right == nullptr) {
//         ans += stoi(s); // Convert string to integer
//         return;
//     }
//     pre(root->left, s, ans);
//     pre(root->right, s, ans);
// }


    int sumNumbers(TreeNode* root) {
        string s="";
        int ans=0;
        pre(root,s,ans);
        return ans;
    }
};
