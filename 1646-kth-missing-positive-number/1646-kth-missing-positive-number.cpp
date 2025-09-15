class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int st=0;
        int ed=arr.size()-1;
        int mid;
        int ok;
        while(st<=ed){
            mid=st+(ed-st)/2;
            if(arr[mid]-(mid+1)<k){
                st=mid+1;
            }else{
                ed=mid-1;
            }
        }
        return st+k;
    }
};