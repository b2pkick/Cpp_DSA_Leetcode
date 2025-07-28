class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> p;
        for(int i=0;i<nums.size();i++){
            p.push_back(nums[i]);
        }
        sort(p.begin(),p.end());
        unordered_map<int,int> mp;
        for(int i=0;i<p.size();i++){
            if(mp.find(p[i])!=mp.end()) continue;
            else{
                mp[p[i]]=i;
            }
        }
        for(int i=0;i<nums.size();i++){
            p[i]=mp[nums[i]];
        }
        return p;
    }
};