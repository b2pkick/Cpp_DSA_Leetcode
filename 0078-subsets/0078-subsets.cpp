class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> hello;
        vector<vector<int>> yo;
        ok(yo,0,hello,nums);
        int p=0;
        return yo;
    }
    void ok(vector<vector<int>>& arr,int index,vector<int>& hello,vector<int>& arr1){
        if(index==arr1.size()){
            arr.push_back(hello);
            return;
        }

        hello.push_back(arr1[index]);
        ok(arr,index+1,hello,arr1);
        hello.pop_back();
        ok(arr,index+1,hello,arr1);
    }
};