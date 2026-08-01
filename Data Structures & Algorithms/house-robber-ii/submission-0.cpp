class Solution {
    public:
        int tgt[101];          
        int solve(int end, int i, vector<int>& nums){
            if (i >= end) return 0;
            if (tgt[i] != -1) return tgt[i];
            int steal=nums[i]+solve(end, i + 2, nums);
            int leave=solve(end,i+1,nums);
            return tgt[i]=max(steal,leave);
    }
int rob(vector<int>& nums) {
    int n=nums.size();
    if(n==1) return nums[0];   
    for (int i=0;i<101;i++) tgt[i]=-1;
    int case1 = solve(n - 1, 0, nums);
    for (int i = 0; i < 101; i++) tgt[i] = -1;
    int case2 = solve(n, 1, nums);
    return max(case1, case2);
    }
};
