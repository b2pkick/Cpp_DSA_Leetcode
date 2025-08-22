class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int q= grid[0].size();
        int p=10000;
        int m=-10000;
        int e=10000;
        int e1=-10000;
        int count=0;
        int count1=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<q;j++){
                if(grid[i][j]==1){
                    if(i+1<p){
                        p=i+1;
                    }
                    if(i+1>m){
                        m=i+1;
                        count++;
                    }
                    if(j+1<e){
                        e=j+1;
                    }
                    if(j+1>e1){
                        e1=j+1;
                        count1++;
                    }
                }
            }
        }
        if(m!=-10000){
            p=m-p+1;
        }
        if(count<1){
            p=1;
        }
        if(e1!=-10000){
            e=e1-e+1;
        }
        if(count1<1){
            e=1;
        }
        cout<<p<<" "<<e;
        return p*e;
    }
};