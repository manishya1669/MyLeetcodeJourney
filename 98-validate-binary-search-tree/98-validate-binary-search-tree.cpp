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
    void inorderT(TreeNode * root,vector<int>&v){
        if(root==NULL)return ;
       
        inorderT(root->left,v);
         v.push_back(root->val);
         cout<<root->val<<endl;
        inorderT(root->right,v);
    }
public:
    bool isValidBST(TreeNode* root) {
       
       if(root==NULL)return true;
        vector<int>v;
        inorderT(root,v);
        for(int i =1;i<v.size();i++){
            if(v[i]<=v[i-1])return false;
        }
        return true;
    }
};