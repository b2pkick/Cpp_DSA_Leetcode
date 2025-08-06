class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ok;
        unordered_map<int,int> mp;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto it:mp){
            if(it.second>nums.size()/3){
                ok.push_back(it.first);
            }
        }
        return ok;
    }
};