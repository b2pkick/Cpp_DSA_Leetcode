class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ok(n,vector<int>(n));
        int q=1;
        int left=0;
        int top=0;
        int right=n-1;
        int bottom=n-1;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                ok[top][i]=q;
                q++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                ok[i][right]=q;
                q++;
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    ok[bottom][i]=q;
                    q++;
                }
            }
            bottom--;
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    ok[i][left]=q;
                    q++;
                }
            }
            left++;
        }
        return ok;
    }
};