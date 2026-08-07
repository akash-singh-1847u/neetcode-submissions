#include<cstring>
class Solution {
public:
    int tg[21][2001];
    int solve(vector<int>& nums,int i,int target,int total){
        if(i==nums.size()){
            return total==target;
        }
        if(tg[i][total+1000]!=-1){
            return tg[i][total+1000];
        }
        int a=solve(nums,i+1,target,nums[i]+total);
        int b=solve(nums,i+1,target,total-nums[i]);
        return tg[i][total+1000]=a+b;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        memset(tg,-1,sizeof(tg));
        return solve(nums,0,target,0);
    }
};
