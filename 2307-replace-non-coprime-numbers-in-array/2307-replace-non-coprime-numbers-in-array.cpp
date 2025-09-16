class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        stack<long long> ans;
        long long i = 1;
        long long q=0;
        long long h=0;
        for(auto it:nums){
            ans.push(it);
            while(ans.size()>1){
                q = ans.top();
                ans.pop();
                h=ans.top();
                ans.pop();
                if(gcd(q,h)!=1){
                    ans.push((q*h)/gcd(q,h));
                }else{
                    ans.push(h);
                    ans.push(q);
                    break;
                }
            }
        }
        vector<int> ans1(ans.size());
        long long p=0;
        for(long long i=ans.size()-1;i>=0;i--){
            p=ans.top();
            ans1[i]=p;
            ans.pop();
        }
        return ans1;
    }
};