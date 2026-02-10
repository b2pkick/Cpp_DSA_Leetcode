class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int ans=0;
        int even=0;
        int odd=0;
        for(int i=0;i<nums.size();i++){
            unordered_set<int> set;
            even=0;
            odd=0;
            if(nums.size()-i<=ans) break;
            for(int j=i;j<nums.size();j++){
                if(even>(nums.size()-i)/2||odd>(nums.size()-i)/2) break;
                if(set.find(nums[j])==set.end()){
                    set.insert(nums[j]);
                    if(nums[j]%2==0) even++;
                    else odd++;
                }
                if(even==odd) ans=max(ans,j-i+1);
            }
        }
        return ans;
    }
};