class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int>mp;
        int max=nums[0];
        for(int num:nums){
            mp[num]++;
            if(num>max){
                max=num;
            }
        }
        if(max<1) return 1;
        for(int i=1;i<max;i++){
            if(mp[i]==0){
                return i;
            }
        }
        return max+1;
    }
};