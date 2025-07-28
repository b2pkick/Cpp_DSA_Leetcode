class Solution {
public:
    bool isPalindrome(int x) {
        long p=0;
        int o=x;
        if(x<0) return false;
        while(x!=0){
            p=p*10;
            p+=x%10;
            x=x/10;
        }
        return (o==p);
    }
};