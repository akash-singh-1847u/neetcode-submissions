class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur=nums[0];;
        int mx=nums[0];;
        for(int i=1;i<nums.size();i++){
            cur=max(nums[i],nums[i]+cur);
            mx=max(mx,cur);
        }
        return mx;
    }
};
