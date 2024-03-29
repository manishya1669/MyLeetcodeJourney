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
    TreeNode * helper(TreeNode * root1,TreeNode * root2){
        if(root1==NULL && root2==NULL){
            return NULL;
        }
        if(root1==NULL && root2 != NULL)
            return root2;
        if(root1 != NULL && root2 == NULL)
            return root1;
        
        TreeNode * node= new TreeNode(root1->val+root2->val);
        node->left = helper(root1->left,root2->left);
        node->right= helper(root1->right,root2->right);
        return node;
    }
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        
        return helper(root1,root2);
    }
};