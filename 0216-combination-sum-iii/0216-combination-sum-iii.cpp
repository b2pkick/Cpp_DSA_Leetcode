class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ok;
        vector<int> arr;
        cs(ok,k,n,0,arr,1);
        return ok;
    }
    void cs(vector<vector<int>>& ok,int k,int n,int sum,vector<int>& arr,int index){
        if(arr.size()==k){
            if(sum==n){
                ok.push_back(arr);
            }
            return;
        }
        for(int i=index;i<=9;i++){
            arr.push_back(i);
            cs(ok,k,n,sum+i,arr,i+1);
            arr.pop_back();
        }
    }
};