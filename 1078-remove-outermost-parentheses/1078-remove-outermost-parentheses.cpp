class Solution {
public:
    string removeOuterParentheses(string s) {
        vector<int> ans;
        int left=0;
        int right=0;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(left==0) ans.push_back(i);
            if(s[i]=='(') left++;
            else left--;
            if(left==0) ans.push_back(i);
        }
        string s1;
        int p=0;
        for(int i=0;i<s.length();i++){
            if(i==ans[p]){
                p++;
            }else{
                s1+=s[i];
            }
        }
        return s1;
    }
};