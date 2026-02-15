class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int i=a.size()-1;
        int j=b.size()-1;
        int c=0;
        while(i>=0&&j>=0){
            if((a[i]-'0')+(b[j]-'0')+c>1){
                if((a[i]-'0')+(b[j]-'0')+c==2)
                ans+='0';
                else ans+='1';
                c=1;
            }else{
                ans+=((a[i]-'0')+(b[j]-'0')+c)+'0';
                c=0;
            }
            i--;
            j--;
        }
        while(i>=0){
            if((a[i]-'0')+c>1){
                ans+='0';
                c=1;
            }else{
                ans+=((a[i]-'0')+c)+'0';
                c=0;
            }
            i--;
        }
        while(j>=0){
            if((b[j]-'0')+c>1){
                ans+='0';
                c=1;
            }else{
                ans+=((b[j]-'0')+c)+'0';
                c=0;
            }
            j--;
        }
        if(c){
            ans+='1';
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};