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
   vector<TreeNode*> generateRec(int start, int end){
    if(start>end) return {nullptr};
	
    vector<TreeNode*> ans;
    for(int i=start; i<= end; i++){
        vector<TreeNode*> left= generateRec(start, i-1);
        vector<TreeNode*> right = generateRec(i+1,end);
        for(auto eleL:left){
            for(auto eleR:right){
                TreeNode* root= new TreeNode(i);
                root->left=eleL; root->right=eleR;
                ans.push_back(root);
            }
        }
    }
    return ans;
} 

 vector<TreeNode*> generateTrees(int n) {
		return generateRec(1,n);
}
};