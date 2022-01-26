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
    // void postorder(TreeNode *root1,vector<int>v){
    //     if(root1 ==NULL)return;
    //    stack<TreeNode *>s;
    //     s.push(root1);
    //     while(!s.empty()){
    //         TreeNode*temp = s.top();
    //         s.pop();
    //         v.push_back(temp->val);
    //         if(temp->left !=NULL)
    //             s.push(temp->left);
    //         if(temp->right !=NULL)
    //             s.push(temp->right);
    //     }
    // }
    vector<int>res;
    void pos(TreeNode *root){
        if(root==NULL)return ;
        res.push_back(root->val);
        pos(root->left);
        pos(root->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        pos(root1);
        pos(root2);
        sort(res.begin(),res.end());
        
        return res;
    }
};