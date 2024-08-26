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
void solve(vector<int>&v,TreeNode*root){
    if(root==NULL)return;
    solve(v,root->left);
    v.push_back(root->val);
    solve(v,root->right);
}
    vector<int> findMode(TreeNode* root) {
         vector<int>v,ans;
        // if(root->left==NULL && root->right==NULL){
        //     ans.push_back(root->val);
        //     return ans;
        // }
       
        solve(v,root);
        unordered_map<int,int>mp;
        for(int i=0;i<v.size();i++){
           mp[v[i]]++;
        }
        int mx=INT_MIN;
        for(auto ele:mp){
           if(ele.second>mx){
            mx=ele.second;
           }
        }
        for(auto ele:mp){
            if(ele.second==mx){
                ans.push_back(ele.first);
            }
        }
        return ans;

    }
};
