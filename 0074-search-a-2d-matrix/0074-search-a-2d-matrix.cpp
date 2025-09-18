class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col =matrix[0].size();
        int st=0;
        int ed=col-1;
        int mid;
        for(int i=0;i<row;i++){
            if(matrix[i][col-1]>=target){
                while(st<=ed){
                    mid=st+(ed-st)/2;
                    if(matrix[i][mid]==target){
                        return true;
                    }else if(matrix[i][mid]>target){
                        ed=mid-1;
                    }else{
                        st=mid+1;
                    }
                }
            }
        }
        return false;
    }
};