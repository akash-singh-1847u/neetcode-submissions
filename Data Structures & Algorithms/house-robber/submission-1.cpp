class Solution {
public:
    // int tgt[101];
    // int solve(vector<int>& nums,int i,int n){
    //     if(i>=n){
    //         return 0;
    //     }
    //     if(tgt[i]!=-1){
    //         return tgt[i];
    //     }
    //     int steal=nums[i]+solve(nums,i+2,n);
    //     int leave=solve(nums,i+1,n);
    //     return tgt[i]=max(steal,leave);
    // }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> t(n+1,0);
        if(n==1){
            return nums[0];
        }
        t[0]=0;
        t[1]=nums[0];
        for(int i=2;i<=n;i++){
            int steal=nums[i-1]+t[i-2];
            int leave=t[i-1];
            t[i]=max(steal,leave);
        }
        return t[n];
    }
};
