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
  
    void inorder(TreeNode * root,map<int,int>&umap ,int k,int &count){
        if(root==NULL)return;
        inorder(root->left,umap,k,count);
        if(umap.find(k-(root->val)) != umap.end()){
            count=1;
        }
        else umap[root->val]++;
        inorder(root->right,umap,k,count);
    }
    bool findTarget(TreeNode* root, int k) {
       
         map<int,int>umap;
        int count =0;
        inorder(root,umap,k,count);
        
        return count;
    }
};