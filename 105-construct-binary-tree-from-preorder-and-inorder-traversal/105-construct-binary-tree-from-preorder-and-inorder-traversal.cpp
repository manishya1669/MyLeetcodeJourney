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
    int preIndex =0;
    TreeNode* build(vector<int>&preorder, vector<int>&inorder,int start,int end){
        if(start>end)return NULL;
        TreeNode * root= new TreeNode(preorder[preIndex]);
        preIndex +=1;
        
        int inorderIndex =0;
        for(int i=start;i<=end;i++){
            if( inorder[i] == root->val){
                inorderIndex = i;
                break;
            }
        }
       root->left  = build(preorder,inorder,start, inorderIndex-1);
       root->right = build(preorder,inorder,inorderIndex+1,end);
        
        return root;
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
        TreeNode * ans = build(preorder,inorder,0,n-1);
        return ans;
    }
};