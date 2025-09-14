class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int max1=nums[0];
        for(auto it:nums){
            if(it>max1) max1=it;
        }
        int st=1;
        int ed=max1;
        int mid;
        int sum=0;
        int ans;
        while(st<=ed){
            sum=0;
            mid=st+(ed-st)/2;
            for(auto it:nums){
                if(it%mid==0){
                    sum+=it/mid;
                }else{
                    sum+=it/mid+1;
                }
            }
            if(sum<=threshold){
                ans=mid;
                ed=mid-1;
            }
            else st=mid+1;
        }
        return ans;
    }
};