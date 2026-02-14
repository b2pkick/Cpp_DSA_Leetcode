class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        sort(words.begin(),words.end());
        int ans=0;
        bool ok=false;
        for(int i=1;i<words.size();i++){
            if(words[i].length()<k){
                if(ok==true) ans++;
                ok=false;
                continue;
            }
            if(words[i].substr(0,min(k,(int)words[i].length()))==words[i-1].substr(0,min(k,(int)words[i-1].length()))){
                ok=true;
            }else{
                if(ok==true) ans++;
                ok=false;
            }
        }
        if(ok==true) ans++;
        return ans;
    }
};