#include<cstring>
class Solution {
public:
    // int tg[101][51];
    // bool dfs(int i,int target,vector<int>& nums){
    //     int n=nums.size();
    //     if(i==n){
    //         return target==0;
    //     }
    //     if(tg[i][target]!=-1){
    //         return tg[i][target];
    //     }
    //     if(target==0){
    //         return tg[i][target]=true;
    //     }
    //     if(target<0){
    //         return tg[i][target]=false;
    //     }
    //     tg[i][target]=dfs(i+1,target-nums[i],nums) || dfs(i+1,target,nums);
    //     return tg[i][target];
    // }
    bool canPartition(vector<int>& nums) {
        int s=0;
        for(int c:nums){
            s+=c;
        }
        if(s%2!=0){
            return false;
        }
        int target=s/2;
        vector<bool> dp(target+1,false);
        dp[0]=true;
        for(int x:nums){
            for(int j=target;j>=x;j--){
                dp[j]=dp[j] || dp[j-x];
            }
        }
        return dp[target];
    }
};
