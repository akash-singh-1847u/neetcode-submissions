class Solution {
public:
    vector<vector<int>> res;
    vector<int> cur;
    void solve(int j, vector<int>& nums){
        res.push_back(cur);
        for(int i=j;i<nums.size();i++){
            if(i>j && nums[i]==nums[i-1]){
                continue;
            }
            cur.push_back(nums[i]);
            solve(i+1,nums);
            cur.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        solve(0,nums);
        return res;
        }
};
