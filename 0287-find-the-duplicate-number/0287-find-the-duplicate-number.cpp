class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        int p;
        for(auto it:nums){
            if(set.find(it)!=set.end()){
                p=it;
            }else{
                set.insert(it);
            }
        }
        return p;
    }
};