class Solution {
public:
    int tgt[101];
    int solve(vector<int>& nums,int i,int n){
        if(i>=n){
            return 0;
        }
        if(tgt[i]!=-1){
            return tgt[i];
        }
        int steal=nums[i]+solve(nums,i+2,n);
        int leave=solve(nums,i+1,n);
        return tgt[i]=max(steal,leave);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<101;i++){
            tgt[i]=-1;
        }
        return solve(nums,0,n);    
    }
};
