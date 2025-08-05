class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=1;
        int p=10000;
        for(int i=2;i<=sqrt(num);i++){
            if(num%i==0){
                sum+=i;
                sum+=num/i;
            }
        }
        if(num==1) return false;
        if(num!=sum) return false;
        return true;
    }
};