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
    void traverse(TreeNode * root, unordered_map<int ,int>&umap){
        if(root == NULL)return;
        umap[root->val]++;
        traverse(root->left,umap);
        traverse(root->right,umap);
        
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int>umap;
        
        vector<int>v;
        traverse(root,umap);
        int maxi = INT_MIN;
        for(auto &it:umap)maxi= max(maxi,it.second);
        
        for(auto &it:umap){
            if(it.second==maxi)
                v.push_back(it.first);
                
            
        }
        
       return v;
    }
};