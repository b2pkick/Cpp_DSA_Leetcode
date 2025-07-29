class Solution {
public:
    void rotate(vector<int>& arr, int d) {
        if(arr.size()==1) return;
        d=d%arr.size();
        int st=0;
        int ed=arr.size()-1;
        while(st<ed){
            swap(arr[st],arr[ed]);
            st++;
            ed--;
        }
        st=0;
        ed=d-1;
        while(st<ed){
            swap(arr[st],arr[ed]);
            st++;
            ed--;
        }
        st=d;
        ed=arr.size()-1;
        while(st<ed){
            swap(arr[st],arr[ed]);
            st++;
            ed--;
        }
    }
};