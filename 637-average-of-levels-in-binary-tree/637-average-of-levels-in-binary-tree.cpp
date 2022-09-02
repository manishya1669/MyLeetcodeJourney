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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>v;
        if(root==NULL)return v;
        
        queue<TreeNode*>q;
        q.push(root);
       // int count =0;
        while(!q.empty()){
            int n  = q.size();
            int count= n;
            double sum=0;
            while(n--){
                TreeNode*temp = q.front();
                q.pop();
                sum+=temp->val;
                if(temp->left)
                    q.push(temp->left);
                
                if(temp->right)
                    q.push(temp->right);
            }
            v.push_back(sum/count);
           
        }
        return v;
        
    }
};