class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(auto it:nums){
            st.insert(it);
        }
        int x=0;
        int count=0;
        int max1=0;
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                x=it;
                count=1;
                while(st.find(it+1)!=st.end()){
                    count++;
                    it++;
                }
                max1=max(max1,count);
            }
        }
        return max1;
    }
};