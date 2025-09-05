class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long> conv;
        vector<long long> ans;
        long long p=0;
        long long max1 = nums[0];
        for(auto it:nums){
            if(it>max1) max1=it;
            conv.push_back(max1+it);
        }
        for(auto it:conv){
            p+=it;
            ans.push_back(p);
        }
        return ans;
    }
};