class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_map<char,int> mp;
        for(auto it:brokenLetters){
            mp[it]++;
        }
        int count=0;
        int count1=0;
        for(auto it:text){
            if(mp.find(it)!=mp.end()){
                count++;
            }
            if(it==' '){
                if(count==0){
                    count1++;
                }
                count=0;
            }
        }
        if(count==0) count1++;
        return count1;
    }
};