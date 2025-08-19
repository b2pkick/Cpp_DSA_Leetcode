class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char,int> mp;
        int count=0;
        int count1=0;
        for(int i=0;i<secret.size();i++){
            mp[guess[i]]++;
        }
        for(int i=0;i<secret.length();i++){
            if(secret[i]==guess[i]){
                count++;
                mp[secret[i]]--;
            }
        }
        for(int i=0;i<secret.length();i++){
            if(secret[i]!=guess[i]){
                if(mp.find(secret[i])!=mp.end()){
                    if(mp[secret[i]]==0) continue;
                    count1++;
                    mp[secret[i]]--;
                }
            }
            }

        string s;
        s+=to_string(count);
        s+="A";
        s+=to_string(count1);
        s+="B";
        return s;
    }
};