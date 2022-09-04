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
   //  vector<vector<int>>v;
    
//     void inorder(TreeNode*root, int index){
//         if(root==NULL)return ;
//         inorder(root->left,index-1);
//         v[index].push_back(root->val);
//         inorder(root->right,index+1);
//     }
    
//    map<int,vector<int>>umap;
//     void solve(TreeNode*root,int index){
//         if(root==NULL)return ;
//         solve(root->left,index-1);
//         umap[index].push_back(root->val);
//         solve(root->right,index+1);
//     }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
       
         vector<vector<int>>v;
        if(root==NULL)return v;
        
        map<int,map<int,multiset<int>>>umap;
        queue<pair<TreeNode*,pair<int,int>>>q;
        
        q.push({root,{0,0}});
        while(!q.empty()){
            auto p = q.front();
            q.pop();
            TreeNode * temp = p.first;
            int x = p.second.first;
            int y = p.second.second;
            umap[x][y].insert(temp->val);
            if(temp->left){
                q.push({temp->left , {x-1,y+1}});
            }
            if(temp->right){
                q.push({temp->right,{x+1,y+1}});
            }
        }
         for(auto p : umap){
            vector<int> col;
            for(auto i : p.second){
                col.insert(col.end(), i.second.begin(), i.second.end());
            }
            
            v.push_back(col);
        }
         
        return v;
 
        }
       
    
};