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
    
    void find(TreeNode*root,int &count,int maxi){
        if(root==NULL)return;
        
        if(maxi<=root->val){
            cout<<root->val<<endl;
            count++;
            maxi=root->val;
            
        }
        find(root->left,count,maxi);
        find(root->right,count,maxi);
    }
    int goodNodes(TreeNode* root) {
        if(root==NULL)return 0;
        int maxi=INT_MIN;
        int count=0;
        find(root,count,maxi);
        return count;
    }
};