class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> p;
        vector<int> q;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0) p.push_back(nums[i]);
            else q.push_back(nums[i]);
        }
        int u=0;
        int t=0;
        int i=0;
        while(u!=p.size()&&t!=q.size()){
            if(i%2==0){ 
                nums[i]=q[t];
                t++;
            }
            else{ 
                nums[i]=p[u];
                u++;
            }
            i++;
        }
        while(u!=p.size()){
            nums[i]=p[u];
            u++;
            i++;
            
        }
        while(t!=q.size()){
            nums[i]=q[t];
            t++;
            i++;
        }
        return nums;
    }
};