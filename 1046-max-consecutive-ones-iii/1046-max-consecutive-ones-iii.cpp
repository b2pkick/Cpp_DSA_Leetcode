class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int p=0;
        int j=0;
        int count=0;
        int max1=-100;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                p++;
            }
            if(p>k){
                if(nums[j]==0) p--;
                j++;
            }
            if(p<=k){
                count=i-j+1;
            }
            if(count>max1) max1=count;
        }
        return max1;
    }
};