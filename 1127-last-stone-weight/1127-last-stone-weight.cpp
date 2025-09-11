class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto it:stones){
            pq.push(it);
        }
        int s;
        int q;
        int z;
        if(pq.size()==0) return 0;
        if(pq.size()==1) return pq.top();
        while(!pq.empty()){
            s=pq.top();
            pq.pop();
            if(pq.empty()) return s;
            q=pq.top();
            pq.pop();
            z=s-q;
            if(z!=0){
                pq.push(z);
            }
        }
        return z;
    }
};