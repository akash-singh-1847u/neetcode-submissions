#include<cstring>
class Solution {
public:
    int tg[101][51];
    bool dfs(int i,int target,vector<int>& nums){
        int n=nums.size();
        if(i==n){
            return target==0;
        }
        if(tg[i][target]!=-1){
            return tg[i][target];
        }
        if(target==0){
            return tg[i][target]=true;
        }
        if(target<0){
            return tg[i][target]=false;
        }
        tg[i][target]=dfs(i+1,target-nums[i],nums) || dfs(i+1,target,nums);
        return tg[i][target];
    }
    bool canPartition(vector<int>& nums) {
        int s=0;
        for(int n:nums){
            s+=n;
        }
        if(s%2!=0){
            return false;
        }
        memset(tg,-1,sizeof(tg));
        int n1=nums.size();
        return dfs(0,s/2,nums);
    }
};
