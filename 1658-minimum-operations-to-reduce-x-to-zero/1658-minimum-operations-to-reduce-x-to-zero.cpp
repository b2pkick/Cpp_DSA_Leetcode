class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum=0;
        for(auto it:nums) sum+=it;
        int ans=INT_MAX;
        unordered_map<int,int> mp;
        int sum1=0;
        for(int i=0;i<nums.size();i++){
            sum1+=nums[i];
            if(sum1==x) ans=min(ans,i+1);
            if(sum1==sum-x) ans=min(ans,(int)nums.size()-i-1);
            if(mp.find(x-(sum-sum1))!=mp.end()){
                ans=min(ans,(int)nums.size()-(i-mp[x-(sum-sum1)]));
            }
            mp[sum1]=i;
        }
        if(ans!=INT_MAX) return ans;
        return -1;
    }
};