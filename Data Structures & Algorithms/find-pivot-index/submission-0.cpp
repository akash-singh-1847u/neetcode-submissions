class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int s=0;
        for(int x:nums){
            s+=x;
        }
        int l=0;
        for(int i=0;i<nums.size();i++){
            int r=s-l-nums[i];
            if(l==r){
                return i;
            }
            l+=nums[i];
        }
        return -1;
    }
};