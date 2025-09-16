class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int st=*max_element(weights.begin(),weights.end());
        int sum1=accumulate(weights.begin(),weights.end(),0);
        if(days==1) return sum1;
        int ed=sum1;
        int mid;
        int sum=0;
        int count=0;
        int ans=0;
        while(st<=ed){
            sum=0;
            mid=st+(ed-st)/2;
            count=1;
            for(int i=0;i<weights.size();i++){
                sum+=weights[i];
                if(sum==mid&&mid<weights.size()-1){
                    count++;
                    sum=0;
                }else if(sum>mid){
                    count++;
                    sum=weights[i];
                }
            }
            if(count<=days){
                ans=mid;
                ed=mid-1;
            }else{
                st=mid+1;
            }
        }
        return ans;
    }
};