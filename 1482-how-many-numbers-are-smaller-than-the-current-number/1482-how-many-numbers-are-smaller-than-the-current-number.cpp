class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int count=0;
        unordered_map<int,int> mp;
        for(auto it:nums){
            mp[it]++;
        }
        vector<int> p;
        for(int i=0;i<nums.size();i++){
            count=0;
            for(auto it:mp){
                if(it.first<nums[i]){
                    count+=it.second;
                }
            }
            p.push_back(count);
        }
        return p;
    }
};