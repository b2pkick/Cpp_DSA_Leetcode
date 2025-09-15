class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long st=1;
        long max1=piles[0];
        long long sum1=0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]>max1) max1=piles[i];
            sum1+=piles[i];
        }
        long ed=max1;
        long mid;
        long sum=0;
        int ok=0;
        while(st<=ed){
            sum=0;
            mid=st+(ed-st)/2;
            for(int i=0;i<piles.size();i++){
                if(piles[i]%mid==0){
                    sum+=piles[i]/mid;
                }else{
                    sum+=piles[i]/mid+1;
                }
            }
            if(sum<=h) {
                ok=mid;
                ed=mid-1;
            }
            else st=mid+1;
        }
        return ok;
    }
};