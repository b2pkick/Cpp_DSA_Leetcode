class Solution {
public:
    int reverseBits(int n) {
        vector<int> ans(32);
        int p=n;
        int i=0;
        while(p!=0){
            ans[i]=p%2;
            p=p/2;
            i++;
        }
        int ok=0;
        long long count=1;
        for(int i=ans.size()-1;i>=0;i--){
            ok+=ans[i]*count;
            count=count*2;
        }
        return ok;
    }
};