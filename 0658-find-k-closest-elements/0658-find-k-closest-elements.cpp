class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<arr.size();i++){
            if(pq.size()==k){
                if(abs(arr[i]-x)<abs(pq.top()-x)){
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