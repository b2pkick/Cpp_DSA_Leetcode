class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int st=0;
        int ed=nums.size()-1;
        int mid=0;
        if(nums.size()==1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[nums.size()-1]!=nums[nums.size()-2]) return nums[nums.size()-1];
        while(st<=ed){
            mid=st+(ed-st)/2;
            if(mid>0&&mid<nums.size()-1&&nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1]) return nums[mid];
            if(mid%2==0&&nums[mid]!=nums[mid+1]){
                ed=mid-1;
            }else if(mid%2==0&&nums[mid]==nums[mid+1]){
                st=mid+1;
            }
            if(mid%2!=0&&nums[mid]!=nums[mid-1]){
                ed=mid-1;
            }else if(mid%2!=0&&nums[mid]==nums[mid-1]){
                st=mid+1;
            }
        }
        return -1;
    }
};