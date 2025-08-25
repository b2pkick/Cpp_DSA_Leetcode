class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<bool> ok(nums.size(),false);
        perm(nums,temp,ans,ok);
        return ans;
    }
    void perm(vector<int>& nums,vector<int>& temp,vector<vector<int>>& ans,vector<bool>& ok){
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }

        for(int i=0;i<nums.size();i++){
            if(ok[i]!=true){
                temp.push_back(nums[i]);
                ok[i]=true;
                perm(nums,temp,ans,ok);
                temp.pop_back();
                ok[i]=false;
            }
        }
    }
};