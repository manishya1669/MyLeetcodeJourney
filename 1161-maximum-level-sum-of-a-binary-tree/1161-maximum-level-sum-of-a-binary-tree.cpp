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
    int maxLevelSum(TreeNode* root) {
        map<int,int>m;
        if(root==NULL)return 0;
        
        queue<TreeNode*>q;
        q.push(root);
        int count=1;
        int level;
        int maxi = INT_MIN;
        while(!q.empty()){
            int n = q.size();
            int sum =0;
            while(n--){
                TreeNode* temp = q.front();
                q.pop();
                sum +=temp->val;
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
           // umap[count]=sum;
            if(sum>maxi){
                maxi = sum;
                level= count;
            }
            sum=0;
            count++;
            
        }
        return level;
    }
};