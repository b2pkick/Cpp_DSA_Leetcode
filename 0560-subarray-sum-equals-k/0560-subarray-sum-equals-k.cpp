class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> prefix(nums.size());
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefix[i]=nums[i]+prefix[i-1];
        }
        int count=0;
        int p=0;
        for(int i=0;i<nums.size();i++){
            p=0;
            if(prefix[i]==k) count++;
            while(p<i){
                if(prefix[i]-prefix[p]==k) count++;
                p++;
            }
        }
        return count;
    }
};