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
TreeNode* ios(TreeNode*root){
    TreeNode*temp=root->left;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)return NULL;
        if(root->val==key){
            // case 1 no child
            if(root->left==NULL && root->right==NULL)return NULL;
            // case 2 one child
            if(root->left==NULL || root->right==NULL){
                if(root->left!=NULL)return root->left;
                return root->right;
            }
            // case 3 two child
            if(root->left!=NULL && root->right!=NULL){
                TreeNode* suc=ios(root);
                root->val=suc->val;
                root->left=deleteNode(root->left,suc->val);
            }

        }
        else if(root->val>key){
            root->left=deleteNode(root->left,key);
        }
        else{
            root->right=deleteNode(root->right,key);
        }
        return root;
        
    }
};
