class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> as;
        for(int i=0;i<nums1.size();i++){
            int j=0;
            while(nums1[i]!=nums2[j]){
                j++;
            }
            int nxt=-1;
            if(j+1<nums2.size() && nums2[j+1]>nums2[j]){
                nxt=nums2[j+1];
            }
            as.push_back(nxt);
        }
        return as;
    }
};