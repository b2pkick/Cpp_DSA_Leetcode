class Solution {
public:
    string reverseWords(string s) {
        string p="";
        vector<string> q;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                p=p+s[i];
            }else{
                if(p!=""){
                    q.push_back(p);
                    p="";
                }
            }
        }
        if(p!=""){
            q.push_back(p);
        }
        string y="";
        for(int i=q.size()-1;i>=0;i--){
            y+=q[i];
            if(i!=0) y+=" ";
        }
        return y;
    }
};