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
    void flatten(TreeNode* root) {
        if(root == NULL) return ;
        //TreeNode * temp= root;
        TreeNode * dummy = new TreeNode(0);
        // TreeNode * savedummy  = dummy;
        stack<TreeNode *>s;
        s.push(root);
        while(!s.empty()){
            TreeNode * x= s.top();
            s.pop();
            
            if(x->right)
                s.push(x->right);
            
            if(x->left )
                s.push(x->left);
            
            dummy->left=NULL;
            dummy->right=x;
            dummy=dummy->right;
            
        }
        
    }
};