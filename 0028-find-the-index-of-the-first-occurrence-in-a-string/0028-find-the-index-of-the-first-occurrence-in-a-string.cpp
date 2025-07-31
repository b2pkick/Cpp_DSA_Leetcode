class Solution {
public:
    int strStr(string s, string m) {
        int j=0;
        if(m.length()>s.length()) return -1;
        if(m.length()==0) return 0;
        for(int i=0;i<=s.length()-m.length();i++){
            j=0;
            while(j<m.length()&&s[i+j]==m[j]){
                j++;
            }
            if(j==m.length()) return i;
        }
        return -1;
    }
};