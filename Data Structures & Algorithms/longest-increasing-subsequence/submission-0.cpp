class Solution {
public:
    int n;
    int solve(vector<int>& nums,int i,int prev){
        n=nums.size();
        if(i==n){
            return 0;
        }
        int take=0;
        if(prev==-1 || nums[i]>nums[prev]){
            take=1+solve(nums,i+1,i);
        }
        int leave=solve(nums,i+1,prev);
        return max(take,leave);
    }
    int lengthOfLIS(vector<int>& nums) {
        n=nums.size();
        return solve(nums,0,-1);
    }
};
