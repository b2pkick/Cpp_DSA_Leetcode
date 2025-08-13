class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st=0;
        int ed=nums.size()-1;
        int mid;
        if(target>nums[ed]) return nums.size();
        if(target<nums[st]) return 0;
        while(st<=ed){
            mid=st+(ed-st)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                ed=mid-1;
                if(nums[mid-1]<target){
                    return mid;
                }
            }
            else{
                st=mid+1;
                if(nums[mid+1]>target){
                    return mid+1;
                }
            }
        }
        return mid;
    }
};