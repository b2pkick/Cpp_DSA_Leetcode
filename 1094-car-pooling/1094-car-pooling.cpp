class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        sort(trips.begin(),trips.end(),[](vector<int>& a,vector<int>& b){
            if(a[1]==b[1]){
                return a[2]<b[2];
            }
            return a[1]<b[1];
        });
        int a=0;
        for(int i=0;i<trips.size();i++){
            a=trips[i][0];
            int j=i+1;
            priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq1;
            while(j<trips.size()&&trips[i][2]>trips[j][1]){
                pq1.push({trips[j][2],j});
                a+=trips[j][0];
                while(trips[j][1]>=pq1.top().first){
                    a-=trips[pq1.top().second][0];
                    pq1.pop();
                }
                if(a>capacity) return false;
                j++;
            }
            if(a>capacity) return false;
        }
        return true;
    }
};