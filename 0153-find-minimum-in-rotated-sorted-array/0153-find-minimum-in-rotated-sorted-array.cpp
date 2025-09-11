class Solution {
public:
    int findMin(vector<int>& nums) {
        int st=0;
        int ed=nums.size()-1;
        int mid;
        int p=100000;
        while(st<=ed){
            mid=st+(ed-st)/2;
            if(nums[mid]<p) p =nums[mid]; 
            if(nums[mid]<=nums[st]&&nums[mid]<=nums[ed]){
                ed=mid-1;
            }else if(nums[mid]>=nums[st]&&nums[mid]<=nums[ed]){
                ed=mid-1;
            }else if(nums[mid]>=nums[st]&&nums[mid]>=nums[ed]){
                st=mid+1;
            }
        }
        return p;
    }
};