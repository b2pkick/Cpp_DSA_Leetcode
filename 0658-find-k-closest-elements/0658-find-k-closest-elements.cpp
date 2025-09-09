class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<int,vector<int>,greater<int>> pq;
        long long diff;
        pq.push(-100000);
        for(int i=0;i<arr.size();i++){
            diff=abs(arr[i]-x);
            if(pq.size()==k){
                if(abs(pq.top()-x)>diff){
                    pq.pop();
                    pq.push(arr[i]);
                }
            }else{
                pq.push(arr[i]);
            }
        }
        vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
        }
        return ans;
    }
};