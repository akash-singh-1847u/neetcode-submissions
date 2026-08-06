class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int left=1;
        int right=1;
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            left*=nums[i];
            right*=nums[nums.size()-1-i];
            // left=left==0?1:left;
            // right=right==0?1:right;
            ans=max(ans,max(left,right));
        }
        return ans;
    }
};
