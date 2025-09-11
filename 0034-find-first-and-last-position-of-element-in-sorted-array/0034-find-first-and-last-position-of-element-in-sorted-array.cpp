class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st=0;
        int ed=nums.size()-1;
        int mid;
        int beg=-1;
        int last=-1;
        while(st<=ed){
            mid=st+(ed-st)/2;
            if(nums[mid]==target){
                last=mid;
                st=mid+1;
            }else if(nums[mid]>target){
                ed=mid-1;
            }else{
                st=mid+1;
            }
        }
        st=0;
        ed=nums.size()-1;
        while(st<=ed){
            mid=st+(ed-st)/2;
            if(nums[mid]==target){
                beg=mid;
                ed=mid-1;
            }else if(nums[mid]>target){
                ed=mid-1;
            }else{
                st=mid+1;
            }
        }
        vector<int> ans;
        ans.push_back(beg);
        ans.push_back(last);
        return ans;
    }
};