class Solution {
public:
    int strStr(string s, string needle) {
        int p=0;
        int q=0;
        for(int i=0;i<s.length();i++){
            if(p==0){
            if(s[i]==needle[0]) q=i;
            }
            if(s[i]==needle[p]){
                p++;
            }else{
                i=i-p+1;
                p=0;
                if(p==0){
                    if(s[i]==needle[p]){ 
                        q=i;
                        p++;
                    }
                }
            }
            if(p==needle.length()) return q; 
        }
        // p=needle.length()-1;
        // for(int i=s.length()-1;i>=0;i--){
        //     if(s[i]==needle[p]){
        //         p--;
        //     }else{
        //         p=needle.length()-1;
        //         if(s[i]==needle[p]){
        //             p--;
        //         }
        //     }
        //     if(p==-1) return i; 
        // }
        return -1;
    }
};