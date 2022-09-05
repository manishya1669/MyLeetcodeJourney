/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int>v;
    void posorder(Node*root){
        if(root==NULL)return ;
        v.push_back(root->val);
        vector<Node*>ans= root->children;
        for(auto x:ans){
            posorder(x);
        }
    }
    vector<int> preorder(Node* root) {
        if(root==NULL)return v;
        posorder(root);
        return v;
    }
};