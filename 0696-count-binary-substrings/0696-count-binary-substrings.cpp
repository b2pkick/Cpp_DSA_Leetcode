class Solution {
public:
    int countBinarySubstrings(string s) {
        int count=1;
        int ans=0;
        int prev=INT_MAX;
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
                count++;
            }else{
                if(prev!=INT_MAX){
                    ans+=min(count,prev);
                }
                prev=count;
                count=1;
            }
        }
        if(prev!=INT_MAX){
            ans+=min(count,prev);
        }
        return ans;
    }
};