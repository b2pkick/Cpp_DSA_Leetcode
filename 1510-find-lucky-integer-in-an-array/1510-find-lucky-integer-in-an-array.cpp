class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto it:arr){
            mp[it]++;
        }
        int p=-1;
        for(auto it:mp){
            if(it.first == it.second){
                if(it.first>p){
                    p=it.first;
                }
            }
        }
        return p;
    }
};