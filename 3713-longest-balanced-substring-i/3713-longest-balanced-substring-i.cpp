class Solution {
public:
    int longestBalanced(string s) {
        unordered_map<char,int> mp;
        int ans=0;
        for(int i=0;i<s.length();i++){
            mp.clear();
            if(s.length()-i<=ans) return ans;
            for(int j=i;j<s.length();j++){
                mp[s[j]]++;
                if(j-i+1<=ans) continue;
                int prev=-1;
                bool ok=true;
                for(auto it:mp){
                    if(prev==-1) prev=it.second;
                    else if(it.second!=prev) ok=false;
                }
                if(ok) ans=max(ans,j-i+1);
            }
        }
        return ans;
    }
};