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
pair<bool,int>fun(TreeNode*root){
    if(root==NULL){
        return {true,0};
    }

    pair<bool,int>leftans=fun(root->left);
    pair<bool,int>rightans=fun(root->right);

    bool op1=leftans.first;
    bool op2=rightans.first;
    bool op3=abs(leftans.second-rightans.second)<=1;

pair<bool,int>ans;
    if(op1 && op2 && op3)ans.first=true;
    else ans.first=false;
    
    ans.second=max(leftans.second,rightans.second)+1;
    return ans;
}
    bool isBalanced(TreeNode* root) {
        // first value of pair representing the balanced and second (int) value representing the height , and this solution works in O(N)
        // if we write seperate function for caculating the height then the total time complexity will be O(N^2) 
        pair<bool,int>p=fun(root);
        return p.first;
    }
};
