class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int max=0;
        for(int i=0;i<nums.size();i++){
            max=max|nums[i];
        }
        int count=0;
        ok(0,nums,max,0,count);
        return count;
    }
    void ok(int index,vector<int>& nums,int max,int curr,int& count){
        if(index==nums.size()){
            if(curr==max) count++;
            return;
        }
        ok(index+1,nums,max,curr|nums[index],count);
        ok(index+1,nums,max,curr,count);
    }
};