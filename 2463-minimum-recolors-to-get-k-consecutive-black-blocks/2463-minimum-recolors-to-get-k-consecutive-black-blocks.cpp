class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int right=0;
        int min=0;
        int left=0;
        int count=0;
        int min1=1000;
        while(right<=blocks.length()-k){
            left=right;
            count=0;
            while(left<k+right){
                if(blocks[left]=='W'){
                    count++;
                }
                left++;
            }
            if(count<min1) min1=count;
            right++;
        }
        return min1;
    }
};