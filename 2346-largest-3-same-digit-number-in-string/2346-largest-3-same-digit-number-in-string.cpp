class Solution {
public:
    string largestGoodInteger(string num) {
        int p=0;
        int q=0;
        char s = num[0];
        string o="";
        int max2=0;
        int max1=0;
        for(int i=0;i<num.length();i++){
            if(num[i]==s){
                p++;
                o+=num[i];
                if(p>max2) max2=p;
            }else{
                p=1;
                o="";
                o+=num[i];
                s=num[i];
            }
            if(p==3){
                q=stoi(o);
                if(q>max1) max1=q;
            }
        }
        o=to_string(max1);
        if(max1==0&&max2<3) return "";
        if(max1==0&&max2>=3) return "000";
        return o;
    }
};