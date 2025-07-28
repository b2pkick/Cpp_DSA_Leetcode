class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> hello;
        vector<vector<int>> yo;
        ok(yo,0,hello,nums);
        int p=0;
        vector<vector<int>> okk;
        // for(int i=1;i<yo.size();i++){
        //     sort(yo[i].begin(),yo[i].end());
        // }
        // okk.push_back(yo[0]);
        // sort(yo.begin(), yo.end(), [](const vector<int>& a, const vector<int>& b) {
        //     if(a.size()!=b.size()){
        //         return a.size()<b.size();
        //     }
        //     return a<b;
        // });
        // for (int i = 1; i < yo.size(); ++i) {
        //     if (yo[i] != yo[i - 1]) {
        //         okk.push_back(yo[i]);
        //     }
        // }
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