class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;
        int max=-1000;
        int count=0;
        int p=0;
        for(int i=0;i<s.length();i++){
            if(set.find(s[i])==set.end()){
                set.insert(s[i]);
                count++;
            }else{
                i=p;
                p++;
                count=0;
                set.clear();
            }
            if(count>max){
                max=count;
            }
        }
        if(max==-1000) return 0;
        return max;
    }
};