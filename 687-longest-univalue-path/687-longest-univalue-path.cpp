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
    
    int longestUnivaluePath(TreeNode* root) {
        int maxPath = 0;
        traverse(root, maxPath);
        return maxPath;
    }
private:
    int traverse(TreeNode* node, int& maxPath) {
        if (!node)
            return 0;
        int leftPath = traverse(node->left, maxPath);
        int rightPath = traverse(node->right, maxPath);
        if (!node->left || node->val != node->left->val)
            leftPath = 0;
        if (!node->right || node->val != node->right->val)
            rightPath = 0;
        maxPath = max(maxPath, leftPath + rightPath);
        return max(leftPath, rightPath) + 1;
    }
};