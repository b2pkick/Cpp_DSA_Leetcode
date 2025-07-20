class Solution {
public:
    int maxArea(vector<int>& height) {
        int p=0;
        int k=height.size();
        int q=0;
        int r;
        for(int i=0;i<height.size();i++){
            if(height[p]>height[k-1]){
                r=height[k-1];
            }else{r=height[p];}
            if(r*(k-p-1)>q){
                q=r*(k-p-1);
            }
            if(height[p]>height[k-1]){
                k-=1;
            }else{
                p+=1;
            }
        }
        return q;
    }
};