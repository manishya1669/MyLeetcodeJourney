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
    
    int heigh(TreeNode*root,int &count){
        if(root==NULL)return 0;
        int le = heigh(root->left,count);
        int ri = heigh(root->right,count);
        count= max(count,le+ri+1);
        cout<<count<<endl;
        return 1 + max(le,ri);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int count=0;
        if(root==NULL)return 0;
        heigh(root,count);
       return count-1;
    }
};