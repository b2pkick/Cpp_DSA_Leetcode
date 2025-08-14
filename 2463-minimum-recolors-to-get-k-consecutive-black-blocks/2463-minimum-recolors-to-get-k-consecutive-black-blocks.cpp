class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int count1=0;
        int min1=1000;
        for(int i=0;i<k;i++){
            if(blocks[i]=='W'){
                count1++;
            }
        }
        min1=count1;
        for(int i=k;i<blocks.size();i++){
            if(blocks[i-k]=='W') count1--;
            if(blocks[i]=='W') count1++;
            min1 = min(min1,count1);
        }
        return min1;
    }
};