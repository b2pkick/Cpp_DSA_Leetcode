class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> arr;
        vector<int> hello;
        ok(arr,hello,0,nums);
        for(int i=0;i<arr.size();i++){
            sort(arr[i].begin(),arr[i].end());
        }
        sort(arr.begin(),arr.end(),[](const vector<int> a,const vector<int> b){
            if(a.size()!=b.size()){
                return a.size()<b.size();
            }
            return a<b;
        });
        vector<vector<int>> e;
        e.push_back(arr[0]);
        for(int i=1;i<arr.size();i++){
            if(arr[i]!=arr[i-1]){
                e.push_back(arr[i]);
            }
        }
        return e;
    }
    void ok(vector<vector<int>>& arr,vector<int>& hello,int index,vector<int> nums){
        if(index==nums.size()){
            arr.push_back(hello);
            return;
        }
        hello.push_back(nums[index]);
        ok(arr,hello,index+1,nums);
        hello.pop_back();
        ok(arr,hello,index+1,nums);
    }
};