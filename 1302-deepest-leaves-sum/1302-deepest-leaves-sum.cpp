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
    int sums =0;
    int deepestLeavesSum(TreeNode* root) {
        int level = deepestLevel(root);
        sum(root,1,level);
        
        return sums;
    }
    int deepestLevel(TreeNode * root){
        if(root==NULL)return 0;
        
        int leftDepth = deepestLevel(root->left);
        int rightDepth= deepestLevel(root->right);
        int maxi = max(leftDepth,rightDepth);
        return maxi +1;
        // return 1+max(deepestLevel(root->left), deepestLevel(root->right));
    }
                                  
    void sum(TreeNode * root,int start,int level){
        if(root != NULL){
            if(start == level){
                sums +=root->val;
            }
            sum(root->left,start+1,level);
            sum(root->right,start+1,level);
        }
    }
};