class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prev=-1;
        while(n){
            if(prev==-1){
                prev=n%2;
            }else{
                if(n%2==prev) return false;
                prev=n%2;
            }
            n/=2;
        }
        return true;
    }
};