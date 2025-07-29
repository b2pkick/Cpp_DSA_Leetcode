class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int p=s.length()-1;
        while(s[p]==' '){
            p--;
        }
        for(int i=p;i>=0;i--){
            if(s[i]==' ') break;
            count++;
        }
        return count;
    }
};