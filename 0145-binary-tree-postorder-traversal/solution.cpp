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
// using two stack

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)return ans;


        stack<TreeNode*>st1,st2;
        st1.push(root);
       if(root->left) st2.push(root->left);
       if(root->right) st2.push(root->right);


        while(!st2.empty()){
            TreeNode* ele=st2.top();
            st2.pop();
            st1.push(ele);


          if(ele->left) st2.push(ele->left);
          if(ele->right) st2.push(ele->right);
        }
        while(!st1.empty()){
            ans.push_back(st1.top()->val);
            st1.pop();
        }
        return ans;
    }
};
