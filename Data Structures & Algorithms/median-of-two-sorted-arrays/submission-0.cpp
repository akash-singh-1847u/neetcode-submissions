class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int> res;
        int i=0;
        int j=0;
        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]){
                res.push_back(nums1[i]);
                i++;
            }
            else{
                res.push_back(nums2[j]);
                j++;
            }
        }
        while(j<n2){
            res.push_back(nums2[j]);
            j++;
        }
        while(i<n1){
            res.push_back(nums1[i]);
            i++;
        }
        int n=res.size();
        long ans=0;
        if(n%2!=0){
            return res[n/2];
        }
        else{
            int first=n/2-1;
            int second=(n/2);
            return (double)(res[first]+res[second])/2;
        }
    }
};
