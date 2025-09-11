class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int st=0;
        int ed=n-1;
        int mid;
        while(st<=ed){
            mid=st+(ed-st)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>=nums[st]){
                if(target<nums[mid]&&target>=nums[st]){
                    ed=mid-1;
                }else{
                    st=mid+1;
                }
            }else if(nums[mid]<=nums[ed]){
                if(target>nums[mid]&&target<=nums[ed]){
                    st=mid+1;
                }else{
                    ed=mid-1;
                }
            }
        }
        return -1;
    }
};