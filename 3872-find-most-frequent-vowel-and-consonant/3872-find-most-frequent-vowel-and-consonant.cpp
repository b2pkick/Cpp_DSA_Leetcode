class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<int,int> mp;
        for(auto it:s){
            mp[it]++;
        }
        int count=0;
        int count1=0;
        for(auto it:mp){
            if(it.first=='a'||it.first=='e'||it.first=='i'||it.first=='o'||it.first=='u'){
                if(it.second>count) count=it.second;
            }else{
                if(it.second>count1) count1=it.second;
            }
        }
        return count+count1;
    }
};