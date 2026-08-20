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
    vector<double> averageOfLevels(TreeNode* root) {
        if(!root)return{};
        
        queue<TreeNode*>q;
        q.push(root);
         q.push(NULL);
    long long sum=0,cnt=0;
      vector<double>ans;
        while(!q.empty()){
       
       int n=q.size();
       if(n==1 && q.front()==NULL)break;
      

        for(int i=0;i<n;i++){
                TreeNode*temp=q.front();
          q.pop();

             if(temp==NULL ){
        if(cnt>0){
                double d=sum/(cnt*1.00000);
          ans.push_back(d);
            cnt=0;
            sum=0;
        }
          }

         else{
             sum+=temp->val;
          cnt++;
          if(temp->left)q.push(temp->left);
          if(temp->right)q.push(temp->right);
       
         }

        }
        q.push(NULL);
      

        }
        return ans;
    }
};
