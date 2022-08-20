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
//    void recursion(TreeNode *root, int level, vector<int> &res)
//     {
//         if(root==NULL) return ;
        
//         if(res.size()<level) res.push_back(root->val);
        
//         recursion(root->right, level+1, res);
//         recursion(root->left, level+1, res);
//     }
    
    vector<int> rightSideView(TreeNode *root) {
       vector<int> res;
    
        
        if(root==NULL)return res;
        
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            while(n--){
                TreeNode*temp = q.front();
                q.pop();
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
                if(n==0)res.push_back(temp->val);
            }
        }
        return res;
        
        
        }
};