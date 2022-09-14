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
    void counter(TreeNode*root , int & count, vector<int>&umap){
        
        if(root==NULL)return;
        
        umap[root->val]++;
        counter(root->left,count,umap);
        counter(root->right,count,umap);
        if(root->left==NULL && root->right==NULL){
            int flag=0;
            for(int i =1;i<=9;i++){
                if(umap[i]%2 !=0){
                    flag++;
                }
            }
            if(flag==1 ||flag==0){
                count++;
            }
        }
        umap[root->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int>umap(10,0);
        int count=0;
        counter(root,count,umap);
        return count;
    }
};