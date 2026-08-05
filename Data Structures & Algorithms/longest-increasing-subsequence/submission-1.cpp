#include<cstring>
class Solution {
public:
    int tg[1001][1001];
    int n;
    int solve(vector<int>& nums,int i,int prev){
        n=nums.size();
        if(i==n){
            return 0;
        }
        if(tg[i][prev+1]!=-1){
            return tg[i][prev+1];
        }
        int take=0;
        if(prev==-1 || nums[i]>nums[prev]){
            take=1+solve(nums,i+1,i);
        }
        int leave=solve(nums,i+1,prev);
        return tg[i][prev+1]=max(take,leave);
    }
    int lengthOfLIS(vector<int>& nums) {
        n=nums.size();
        memset(tg,-1,sizeof(tg));
        return solve(nums,0,-1);
    }
};
