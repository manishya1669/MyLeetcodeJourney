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
    vector<vector<int>>ans;
    void traver(TreeNode* root){

      if(root==NULL)return ;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int>v;
            while(n--){
                TreeNode*temp=q.front();
                q.pop();
                v.push_back(temp->val);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right)
                    q.push(temp->right);
                
                }
            ans.push_back(v);
            }
        }
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        if(root==NULL)return ans;
        
        traver(root);
        for(int i =0;i<ans.size();i++){
            if(i%2 !=0){
                reverse(ans[i].begin(),ans[i].end());
            }
        }
        return ans;
    }
};