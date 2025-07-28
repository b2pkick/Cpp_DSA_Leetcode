class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> p;
        unordered_set<int> set;
        for(auto it:nums){
            if(set.find(it)!=set.end()){
                p.push_back(it);
            }else{
                set.insert(it);
            }
        }
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int osum=nums.size()*(nums.size()+1)/2;
        sum=sum-p[0];
        p.push_back(osum-sum);
        return p;
    }
};