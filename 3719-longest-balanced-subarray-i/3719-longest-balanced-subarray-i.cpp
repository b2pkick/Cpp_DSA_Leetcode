class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int ans=0;
        int even=0;
        int odd=0;
        unordered_set<int> set;
        for(int i=0;i<nums.size();i++){
            set.clear();
            even=0;
            odd=0;
            if(nums.size()-i<=ans) break;
            for(int j=i;j<nums.size();j++){
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