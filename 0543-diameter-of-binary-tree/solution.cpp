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
pair<int,int>fun(TreeNode*root){
    if(root==NULL){
        return {0,0};
    }
    pair<int,int>left=fun(root->left);
    pair<int,int>right=fun(root->right);

    int op1=left.first;
    int op2=right.first;
    int op3=left.second+right.second+1;

    pair<int,int>ans;
    ans.first=max(op1,max(op2,op3));
    ans.second=max(left.second,right.second)+1;
    return ans;
}
    int diameterOfBinaryTree(TreeNode* root) {

        // in pair-> 1st is for diameter and second is for height
        //if we make a seperate function for calculating height then it will take overall O(N^2) time complexity , in this code the time complexity is O(N) we are iterating every node only one time
        pair<int,int>ans=fun(root);
        return ans.first-1;
    }
};
