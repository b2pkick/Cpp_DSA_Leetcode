class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int p=0;
        int q=1;
        int i=0;
        vector<int> ans(nums.size());
        while(i<nums.size()){
            if(nums[i]<0){
                ans[q]=nums[i];
                q=q+2;
            }else{
                ans[p]=nums[i];
                p=p+2;
            }
            i++;
        }
        return ans;
    }
};