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
   
    void inorder(TreeNode * root, vector<int>&v){
        if(root==NULL)return ;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
        
    }
    TreeNode * converter( vector<int>&v,int low ,int high){
        if(low>high)return NULL;
        int mid = low + (high-low)/2;
        TreeNode* root = new TreeNode(v[mid]);
        root->left = converter(v,low,mid-1);
        root->right = converter(v,mid+1,high);
        
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>v;
        inorder(root,v);
       return converter(v,0,v.size()-1);
        
       
        
    }
};