class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> mp;
        int p=n;
        int count=0;
        while(p!=0){
            p=p/10;
            count++;
        }
        // if(n==1) return true;
        // if(count==1) return false;
        int sum=n;
        while(sum!=1){
            p=sum;
            sum=0;
            while(p!=0){
                sum+=(p%10)*(p%10);
                p=p/10;
            }
            if(mp.find(sum) !=mp.end()) return false;
            mp[sum]++;
        }
        return true;
    }
};