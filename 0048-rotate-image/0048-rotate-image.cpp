class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int z=0;
        int p=matrix.size();
        for(int i=0;i<p;i++){
            for(int j=i+1;j<p;j++){
                z=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=z;
            }
        }
        for(int i=0;i<p;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};