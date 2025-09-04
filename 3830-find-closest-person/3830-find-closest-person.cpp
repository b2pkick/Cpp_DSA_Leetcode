class Solution {
public:
    int findClosest(int x, int y, int z) {
        int p=0;
        int q=0;
        if(x>z) p=x-z;
        else p=z-x;
        if(y>z) q=y-z;
        else q=z-y;

        if(p==q) return 0;
        if(p>q){
            return 2;
        }else return 1;
    }
};