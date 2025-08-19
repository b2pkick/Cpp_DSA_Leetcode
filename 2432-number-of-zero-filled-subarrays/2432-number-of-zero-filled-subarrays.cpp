class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count=0;
        long long count1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }else{
                count1+=count*(count+1)/2;
                count=0;
            }
        }
        count1+=count*(count+1)/2;
        return count1;
    }
};