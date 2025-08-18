class Solution {
public:
    string largestOddNumber(string num) {
        int p=-1000;
        string s;
        for(int i=num.length()-1;i>=0;i--){
            if(num[i]%2!=0){
                p=i;
                break;
            }
        }
        if(p==-1000) return "";
        for(int i=0;i<=p;i++){
            s+=num[i];
        }
        return s;
    }
};