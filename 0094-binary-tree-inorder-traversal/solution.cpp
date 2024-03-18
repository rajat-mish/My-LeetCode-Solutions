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
    vector<int> inorderTraversal(TreeNode* root) {
        //Morris traversal :- uses no extra space O(1)
        vector<int>v;
        TreeNode*cur=root;
        while(cur){
            if(cur->left!=NULL){
                //find predecessor
                TreeNode*pred=cur->left;
                while(pred->right!=NULL && pred->right!=cur){
                    pred=pred->right;
                }
               if(pred->right==NULL){ //link
                pred->right=cur;
                cur=cur->left;
               }
               else{
                // unlink
                pred->right=NULL;
                v.push_back(cur->val);
                cur=cur->right;
               }
            }
            else{
                v.push_back(cur->val);
                cur=cur->right;
            }
        }
        return v;
    }
};
