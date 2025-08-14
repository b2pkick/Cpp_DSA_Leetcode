class Solution {
public:
    string largestGoodInteger(string num) {
        int p=0;
        int q=0;
        char s = num[0];
        int max2=0;
        int max1=0;
        for(int i=0;i<num.length();i++){
            if(num[i]==s){
                p++;
                if(p>max2) max2=p;
            }else{
                p=1;
                s=num[i];
            }
            if(p==3){
                q=num[i]-'0';
                if(q>max1) max1=q;
            }
        }
        string u="";
        if(max1==0&&max2<3) return "";
        if(max1==0&&max2>=3) return "000";
        else{
            for(int i=0;i<3;i++){
                u+=to_string(max1);
            }
        }
        return u;
    }
};