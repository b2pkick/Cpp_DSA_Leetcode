class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int ans=0;
        int a=capacity;
        for(int i=0;i<plants.size();i++){
            if(a<plants[i]){
                ans+=2*i;
                a=capacity;
            }
            a=a-plants[i];
            ans++;
        }
        return ans;
    }
};