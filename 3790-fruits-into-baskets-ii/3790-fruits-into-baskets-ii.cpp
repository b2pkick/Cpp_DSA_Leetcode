class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int p=0;
        int count=0;
        for(int i=0;i<fruits.size();i++){
            p=0;
            while(p<baskets.size()){
                if(baskets[p]>=fruits[i]){
                    baskets[p]=-100;
                    count++;
                    break;
                }
                p++;
            }
        }
        return fruits.size()-count;
    }
};