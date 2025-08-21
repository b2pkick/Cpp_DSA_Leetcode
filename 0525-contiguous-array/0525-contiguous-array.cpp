class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                sum+=-1;
            }else{
                sum+=1;
            }
            if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }
        }
        sum=0;
        int max1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                sum+=-1;
            }else{
                sum+=1;
            }
            if(sum==0){
                max1 = max(max1,i+1);
            }
            if(mp.find(sum)!=mp.end()){
                max1 = max(max1,i-mp[sum]);
            }
        }
        return max1;
    }
};