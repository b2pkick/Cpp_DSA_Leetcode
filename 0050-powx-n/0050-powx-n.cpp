class Solution {
public:
    double myPow(double x, int n) {
        long long p=n;
        if(x==1) return 1;
        if(x==-1&&n%2==0) return 1;
        if(x==-1&&n%2!=0) return -1;
        if(x==0) return 0;
        if(p>=INT_MAX) return 0;
        if(p<=INT_MIN) return 0;
        if(p<0){
            x=1/x;
            p=-p;
        }
        return pow1(x,p);
    }
    double pow1(double x,long long p){
        if(p==0) return 1;
        if(p==1) return x;
        if(p%2==0){
            return pow1(x,p/2)*pow1(x,p/2);
        }else
        return x*pow1(x,p-1);
    };
};