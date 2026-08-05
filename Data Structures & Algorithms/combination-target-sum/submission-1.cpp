class Solution {
public:
    vector<vector<int>> res;
    void solve(int i,vector<int>& cur,int total,int target,vector<int>& nums){
        if(total==target){
            res.push_back(cur);
            return;
        }
        if(total>target){
            return;
        }
        for(int j=i;j<nums.size();j++){
            if(nums[j]+total<=target){
                cur.push_back(nums[j]);
                solve(j,cur,nums[j]+total,target,nums);
                cur.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> cur;
        solve(0,cur,0,target,nums);
        return res;
    }
};
