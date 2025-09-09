class Solution {
public:
    bool okk(int p){
        while(p!=0){
            if(p%10==0) return false;
            p/=10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int> ok;
        int p=1;
        int q=n-1;
        vector<int> ans;
        ans.push_back(0);
        ans.push_back(0);
        int h=0;
        while(h!=2){
            if(okk(p)){
                ans[0]=1;
            }else{
                ans[0]=0;
            }
            if(okk(q)){
                ans[1]=1;
            }else{
                ans[1]=0;
            }
            if(ans[0]==1&&ans[1]==1){
                break;
            }
            p++;
            q--;
        }
        ok.push_back(p);
        ok.push_back(q);
        return ok;
    }
};