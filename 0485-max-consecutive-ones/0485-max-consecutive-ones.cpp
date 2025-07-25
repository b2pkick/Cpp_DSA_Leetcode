class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0;
        int p=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                p++;
            }else{
                p=0;
            }
            if(p>max){
                max=p;
            }
        }
        return max;
    }
};