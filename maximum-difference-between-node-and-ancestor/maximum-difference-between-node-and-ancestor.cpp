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
    int result = 0;
    void find(TreeNode * root ,int mini,int maxi){
        if(root == NULL)return ;
        
        result = max(result,max(abs(root->val - mini),abs(root->val - maxi)));
        mini = min(root->val,mini);
        maxi = max(root->val,maxi);
        find(root->left,mini,maxi);
        find(root->right,mini,maxi);
    }
    int maxAncestorDiff(TreeNode* root) {
        int maxi = root->val;
        int mini = root->val;
        find(root,mini,maxi);
        return result;
    }
};