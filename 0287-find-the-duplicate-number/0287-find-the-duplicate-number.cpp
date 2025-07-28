class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto it:nums){
            mp[it]++;
        }
        int p=0;
        for(auto it:mp){
            if(it.second>1){
                p=it.first;
            }
        }
        return p;
    }
};