class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int i=0;
        int j;
        int k;
        int u;
        long long sum=0;
        if(nums.size()<4) return {};
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-3;i++){
            if(i>0&&nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<nums.size()-2;j++){
                k=j+1;
                u=nums.size()-1;
                if(j>i+1&&nums[j]==nums[j-1]) continue;
                while(k<u){
                    sum=(long long)nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[u];
                    if(sum>target){
                        u--;
                    }else if(sum<target){
                        k++;
                    }else{
                        ans.push_back({nums[i],nums[j],nums[k],nums[u]});
                        u--;
                        k++;
                        while(k<u&&nums[u]==nums[u+1]) u--;
                        while(k<u&&nums[k]==nums[k-1]) k++;
                    }
                }
            }
        }
        return ans;
    }
};