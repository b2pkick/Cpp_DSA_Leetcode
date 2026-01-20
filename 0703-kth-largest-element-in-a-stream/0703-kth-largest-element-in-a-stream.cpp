class KthLargest {
public:
    int k;
    priority_queue<int,vector<int>,greater<int>> ok;
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        for(int i=0;i<nums.size();i++){
            ok.push(nums[i]);
            if(ok.size()>k) ok.pop();
        }
    }
    
    int add(int val) {
        ok.push(val);
        if(ok.size()>k)
        ok.pop();
        return ok.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */