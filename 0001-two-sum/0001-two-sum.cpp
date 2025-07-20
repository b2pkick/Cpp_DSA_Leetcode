class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> ok;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        int q=0;
        for(int i=0;i<nums.size();i++){
                auto p=mp.find(target-nums[i]);   
            if(p!=mp.end()&&p->second!=i){
                q=p->second;
                ok.push_back(i);
                ok.push_back(q);
                return ok;
            }
        }
        return ok;
    }
};