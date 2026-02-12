class Solution {
public:
    void ok(vector<int>& ans,int n,int p){
        if(p>n){
            return;
        }
        if(p!=0)
        ans.push_back(p);
        for(int i=0;i<=9;i++){
            if(p==0&&i==0) i++;
            if(p*10+i>n) break;
            ok(ans,n,p*10+i);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        ok(ans,n,0);
        return ans;
    }
};