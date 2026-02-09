class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int> mp;
        priority_queue<pair<char,int>,vector<pair<char,int>>,function<bool(pair<char,int>,pair<char,int>)>> pq(
            [](pair<char,int> a,pair<char,int> b){return a.second<b.second;}
        );
        for(auto it:tasks) mp[it]++;
        for(auto it:mp) pq.push({it.first,it.second});
        int a=0;
        vector<char> ok;
        int k=0;
        while(mp.size()>0){
            mp[pq.top().first]--;
            if(mp[pq.top().first]==0) mp.erase(pq.top().first);
            else ok.push_back(pq.top().first);
            k++;
            pq.pop();
            if(k==n+1){
                for(int i=0;i<ok.size();i++) pq.push({ok[i],mp[ok[i]]});
                a+=n+1;
                k=0;
                ok.clear();
            }
            if(pq.empty()&&mp.size()>0){
                a+=n+1;
                k=0;
                for(int i=0;i<ok.size();i++) pq.push({ok[i],mp[ok[i]]});
                ok.clear();
            }
            if(pq.empty()&&mp.size()==0){
                a+=k;
            }
        }
        return a;
    }
};