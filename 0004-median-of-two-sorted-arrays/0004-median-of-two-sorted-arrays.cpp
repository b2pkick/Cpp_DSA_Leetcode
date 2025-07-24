class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int left=0;
        int lhigh=nums1.size()-1;
        int rhigh=nums2.size()-1;
        int right=0;
        int i=0;
        vector<int> p(nums1.size()+nums2.size());
        while(left<=lhigh&&right<=rhigh){
            if(nums1[left]>nums2[right]){
                p[i]=nums2[right];
                right++;
            }else{
                p[i]=nums1[left];
                left++;
            }
            i++;
        }
        while(left<=lhigh){
            p[i]=nums1[left];
            left++;
            i++;
        }
        while(right<=rhigh){
            p[i]=nums2[right];
            right++;
            i++;
        }
        float q=0;
        if((nums1.size()+nums2.size())%2==0){
            q=(p[p.size()/2]+p[p.size()/2-1])/2.0;
        }else{
            q=p[p.size()/2];
        }
        return q;
    }
};