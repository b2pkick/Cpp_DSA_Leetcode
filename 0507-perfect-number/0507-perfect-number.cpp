class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        int p=10000;
        for(int i=1;i<=num/2;i++){
            if(i>=p) break;
            if(num%i==0){
                sum+=i;
                sum+=num/i;
                p=num/i;
            }
        }
        cout<<sum;
        if(num!=sum/2) return false;
        return true;
    }
};