class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        unordered_map<char,int> mp1;
        for(auto it:s){
            mp[it]++;
        }
        for(auto it:t){
            mp1[it]++;
        }
        if(mp.size()>mp1.size()){
        for(auto it:mp){
            if(it.second!=mp1[it.first]) return false;
        }
        }else{
            for(auto it:mp1){
            if(it.second!=mp[it.first]) return false;
        }
        }
        return true;
    }
};