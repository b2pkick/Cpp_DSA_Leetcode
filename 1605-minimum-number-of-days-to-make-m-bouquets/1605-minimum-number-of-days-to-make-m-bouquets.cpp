class Solution {
public:
    int minDays(vector<int>& bloom, long long m, long long k) {
        if(m*k>bloom.size()) return -1;
        long long st = *min_element(bloom.begin(),bloom.end());
        long long ed = *max_element(bloom.begin(),bloom.end());
        long long mid;
        long long count=0;
        long long x = 0;
        long long d=0;
        while(st<=ed){
            mid=st+(ed-st)/2;
            count=0;
            d=0;
            for(int i=0;i<bloom.size();i++){
                if(bloom[i]<=mid){
                    d++;
                    if(d==k){
                        d=0;
                        count++;
                    }
                }else{
                    d=0;
                }
            }
            if(count>=m){
                x=mid;
                ed=mid-1;
            }else{
                st=mid+1;
            }
        }
        return x;
    }
};