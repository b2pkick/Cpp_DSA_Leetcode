class Solution {
public:
    int reverse(int x) {
        long p=0;
        while(x!=0){
            if(p*10+x%10>pow(2,31)||p*10+x%10<-pow(2,31)) return 0;
            p=p*10;
            p+=x%10;
            x=x/10;
        }
        return p;
    }
};