class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int count1=0;
        int min1=1000;
        int j=0;
        for(int i=0;i<blocks.length();i++){
            if(blocks[i]=='W'){
                count1++;
            }
            if(i==k-1) min1=count1;
            if(i>=k){
                if(blocks[j]=='W') count1--;
                min1 = min(min1,count1);
                j++;
            }
        }
        return min1;
    }
};