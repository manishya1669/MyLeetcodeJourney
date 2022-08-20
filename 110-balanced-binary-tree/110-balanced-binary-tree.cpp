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
    void balanced(TreeNode*root, bool &ans){
        if(root!=NULL){
        balanced(root->left,ans);
        int le= height(root->left);
        int ri= height(root->right);
        int diff = abs(le-ri);
        if(diff>1){
            ans=ans& false;
        }
        balanced(root->right,ans);
        }
    }
    int height(TreeNode*root){
        if(root==NULL)return 0;
        int le = height(root->left);
        int ri = height(root->right);
        return max(le,ri)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)return true;
        bool ans= true;
        balanced(root,ans);
        return ans;
        
    }
};