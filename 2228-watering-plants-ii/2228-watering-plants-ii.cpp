class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int left=0;
        int right=plants.size()-1;
        int p=capacityA;
        int q=capacityB;
        int count=0;
        while(left<=right){
            if(left==right){
                if(max(p,q)<plants[left]) count++;
            }else{
            if(plants[left]<=p){
                p=p-plants[left];
            }else{
                p=capacityA;
                p=p-plants[left];
                count++;
            }
            if(plants[right]<=q){
                q=q-plants[right];
            }else{
                q=capacityB;
                q=q-plants[right];
                count++;
            }
            }
            left++;
            right--;
        }
        return count;
    }
};