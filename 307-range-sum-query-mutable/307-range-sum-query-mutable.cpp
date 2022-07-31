
   class NumArray {
public:
    static const int N = 3e4 + 100;
    long long t[4 * N];
    int a[N]; int n;
    void build(int u, int l, int r) {
        if (l == r) {
            t[u] = a[l];
            return;
        }
        int m = (l + r) >> 1;
        build(u + u, l, m);
        build(u + u + 1, m + 1, r);
        t[u] = t[u + u] + t[u + u + 1];
    }
    
    int get(int u, int ul, int ur, int l, int r) {
        if (l > ur || r < ul) {
            return 0;
        }
        if (l <= ul && ur <= r) {
            return t[u];
        }
        int m = (ul + ur) >> 1;
        return get(u + u, ul, m, l, r) + get(u + u + 1, m + 1, ur, l, r);
    }
    
    void upd(int u, int ul, int ur, int pos, int value) {
        if (ul == ur) {
            t[u] = value;
            return;
        }
        int m = (ul + ur) >> 1;
        if (m >= pos) {
            upd(u + u, ul, m, pos, value);
        } else {
            upd(u + u + 1, m + 1, ur, pos, value);
        }
        t[u] = t[u + u] + t[u + u + 1];
    }
    
    NumArray(vector<int>& nums) {
        n = nums.size();
        for (int i = 1; i <= nums.size(); ++i) {
            a[i] = nums[i - 1];
        }
        build(1, 1, nums.size());
    }
    
    void update(int index, int val) {
        upd(1, 1, n, index + 1, val);
    }
    
    int sumRange(int left, int right) {
        return get(1, 1, n, left + 1, right + 1);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */