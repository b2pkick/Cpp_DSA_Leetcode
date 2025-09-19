class Solution {
public:
    int mySqrt(int x) {
        long long st=1;
        long long ed=x/2;
        long long mid;
        if(x==0 ||x==1) return x;
        while(st<=ed){
            mid=st+(ed-st)/2;
            if((mid*mid)==x) return mid;
            if((mid*mid)>x) ed=mid-1;
            else st=mid+1;
        }
        return ed;
    }
};