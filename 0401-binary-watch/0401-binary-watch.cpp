class Solution {
public:
    void ok(vector<string>& ans,int h,int m,int turnedOn,int p){
        if(h>11||m>59){
            return;
        }
        if(turnedOn==0){
            string s="";
            s+=to_string(h);
            s+=':';
            if(m<=9){
                s+='0';
                s+=m+'0';
            }
            else
            s+=to_string(m);
            ans.push_back(s);
            return;
        }
        for(int i=p;i>=0;i--){
            if(i<4){
                ok(ans,h+(1<<i),m,turnedOn-1,i-1);
            }else{
                ok(ans,h,m+(1<<(i-4)),turnedOn-1,i-1);
            }
        }
    }
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans;
        ok(ans,0,0,turnedOn,9);
        return ans;
    }
};