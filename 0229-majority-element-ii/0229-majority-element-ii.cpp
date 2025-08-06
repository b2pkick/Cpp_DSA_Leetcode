class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0;
        int count2=0;
        int p=0;
        int q=1;
        vector<int> ok;
        for(auto it:nums){
            if(it==p){
                count1++;
            }else if(it==q){
                count2++;
            }else if(count1==0){
                count1=1;
                p=it;
            }else if(count2==0){
                count2=1;
                q=it;
            }else{
                count1--;
                count2--;
            }

        }
            count1=0;
            count2=0;
            for(auto it:nums){
                if(it==p) count1++;
                if(it==q) count2++;
            }
            if(count1>nums.size()/3){
                ok.push_back(p);
            }
            if(count2>nums.size()/3){
                ok.push_back(q);
            }
        return ok;
    }
};