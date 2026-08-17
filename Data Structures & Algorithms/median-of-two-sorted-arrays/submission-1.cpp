class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        if(n1>n2){
            return findMedianSortedArrays(nums2,nums1);
        }
        int low=0;
        int high=n1;
        while(low<=high){
            int l=(low+high+1)/2;
            int r=((n1+n2+1)/2)-l;
            int Aleft=(l==0)?INT_MIN:nums1[l-1];
            int Aright=(l==n1)?INT_MAX:nums1[l];
            int Bleft=(r==0)?INT_MIN:nums2[r-1];
            int Bright=(r==n2)?INT_MAX:nums2[r];
            if(Aleft<=Bright && Bleft<=Aright){
                if(((n1+n2)%2)!=0){
                    return max(Aleft,Bleft);
                }
                else{
                    return (min(Aright,Bright)+max(Aleft,Bleft))/2.0;
                }
            }
            if(Aleft>Bright){
                high=l-1;
            }
            else{
                low=l+1;
            }
        }
    }
};
