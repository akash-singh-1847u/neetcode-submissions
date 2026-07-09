class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc=1;
        int dic=1;
        int ans=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                inc++;
                dic=1;
            }
            else if(nums[i]>nums[i+1]){
                dic++;
                inc=1;
            }
            else{
                inc=1;
                dic=1;
            }
            ans=max(ans,max(inc,dic));
        }
        return ans;
    }
};