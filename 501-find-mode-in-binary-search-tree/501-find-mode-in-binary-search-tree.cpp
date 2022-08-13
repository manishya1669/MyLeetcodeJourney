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
    void inorder(TreeNode * root,unordered_map<int,int>&umap){
        if(root==NULL)return;
        inorder(root->left,umap);
        umap[root->val]++;
        inorder(root->right,umap);
    }
    vector<int> findMode(TreeNode* root) {
       unordered_map<int,int>umap;
        vector<int>v;
        int maxi =INT_MIN;
        inorder(root,umap);
       
        for(auto x:umap){
            maxi = max(maxi,x.second);
        }
        for(auto x:umap){
            if(x.second ==maxi){
                v.push_back(x.first);
            }
        }
        return v;
        
       
    }
};