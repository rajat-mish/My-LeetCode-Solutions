/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
void markParent(TreeNode*root,unordered_map<TreeNode*,TreeNode*>&mp){
    queue<TreeNode*>q;

    q.push(root);
    while(!q.empty()){
        TreeNode*cur=q.front();
        q.pop();
        if(cur->left){
            mp[cur->left]=cur;
            q.push(cur->left);
        }

        if(cur->right){
            mp[cur->right]=cur;
            q.push(cur->right);
        }
    }
}
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>mp;
        markParent(root,mp);
       queue<TreeNode*>q;
       q.push(target);
       unordered_map<TreeNode*,bool>visited;
       visited[target]=true;

        int cl=0;
        while(!q.empty()){
            int s=q.size();
            if(cl++ ==k){
                break;
            }
            for(int i=0;i<s;i++){
                TreeNode*cur=q.front();
                q.pop();
                if(cur->left && !visited[cur->left]){
                    q.push(cur->left);
                    visited[cur->left]=true;
                }

                if(cur->right && !visited[cur->right]){
                    q.push(cur->right);
                    visited[cur->right]=true;
                }

                if(mp[cur] && !visited[mp[cur]]){
                    q.push(mp[cur]);
                    visited[mp[cur]]=true;
                }
            }
        }
        vector<int>ans;
        while(!q.empty()){
            TreeNode*cur=q.front();
            q.pop();
            ans.push_back(cur->val);
        }
        return ans;
    }
};
