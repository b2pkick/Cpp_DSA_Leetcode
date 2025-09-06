class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ok;
        vector<int> small;
        for(int i=1;i<=numRows;i++){
            small={};
            pas(ok,small,i);
        }    
        return ok;
    }
    void pas(vector<vector<int>>& ok,vector<int>& small,int row){
        int p;
        int prev=row-1;
        small.push_back(1);
        int ans=row;
        for(int i=1;i<row;i++){
            p=small.back();
            p=p*prev;
            p=p/i;
            small.push_back(p);
            prev--;
        }
        ok.push_back(small);
    }
};