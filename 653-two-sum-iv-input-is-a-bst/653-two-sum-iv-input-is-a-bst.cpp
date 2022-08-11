/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
https://assets.leetcode.com/uploads/2020/09/21/sum_tree_1.jpg *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool find(TreeNode * root,int K ,unordered_map<int,int>&umap){
        if(root==NULL)return false;
        
        if(umap.find(K-root->val)  != umap.end()){
            return true;
            
        }else{
            umap.insert({root->val,1});
        }
        
       bool left= find(root->left,K,umap);
       bool right = find(root->right,K,umap);
        
        return left || right;
    }
    bool findTarget(TreeNode* root, int k) {
        unordered_map<int,int>umap;
        return find(root,k,umap);
    }
};