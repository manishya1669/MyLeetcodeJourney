class Solution {
public:
    struct node {
        int no;
        int fre;
        node(int a,int b){
            no = a;
            fre = b;
        }
    
    };
    struct compare{
        bool operator()(node const &a , node const &b){
            return a.fre<b.fre;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int ,int>umap;
        for(auto x:nums){
            umap[x]++;
        }
        priority_queue<node,vector<node>,compare>heap;
        for(auto it:umap){
            heap.push(node(it.first,it.second));
        }
        vector<int>ans;
        while(k--){
            node temp = heap.top();
            heap.pop();
            ans.push_back(temp.no);
        }
        return ans;
    }
};