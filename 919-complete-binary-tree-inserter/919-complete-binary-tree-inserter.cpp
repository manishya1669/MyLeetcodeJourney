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
class CBTInserter {
public:
    TreeNode *node;
    CBTInserter(TreeNode* root) {
        node = root;
    }
    
    int insert(int val) {
        TreeNode * node1=node;
        queue<TreeNode*>q;
        if(node->left ==NULL && node ->right ==NULL){
            node->left = new TreeNode(val);
            return node->val;
        }
        q.push(node);
        while(!q.empty()){
            TreeNode * temp = q.front();
            q.pop();
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
            if(!temp->left){
                temp->left = new TreeNode(val);
                return temp->val;
            }
            if(!temp->right){
                temp->right =new TreeNode(val);
                return temp->val;
            }
        }
        return -1;
    }
    
    TreeNode* get_root() {
        return node;
    }
};

/**
 * Your CBTInserter object will be instantiated and called as such:
 * CBTInserter* obj = new CBTInserter(root);
 * int param_1 = obj->insert(val);
 * TreeNode* param_2 = obj->get_root();
 */