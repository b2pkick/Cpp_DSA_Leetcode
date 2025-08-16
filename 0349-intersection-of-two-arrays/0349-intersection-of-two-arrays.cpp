class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(),nums1.end());
        unordered_set<int> ans;
        for(auto it:nums2){
            if(s.count(it)){
                ans.insert(it);
            }
        }
        vector<int> ok(ans.begin(),ans.end());
        return ok;
    }
};