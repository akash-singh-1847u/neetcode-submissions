class Solution {
public:
    vector<vector<int>> res;
    void solve(int i,vector<int>& cur,int total,int target,vector<int>& candidates){
        if(total==target){
            res.push_back(cur);
            return;
        }
        for(int j=i;j<candidates.size();j++){
            if(j>i && candidates[j]==candidates[j-1]){
                continue;
            }
            if(total+candidates[j]>target){
                return;
            }
            cur.push_back(candidates[j]);
            solve(j+1,cur,candidates[j]+total,target,candidates);
            cur.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> cur;
        solve(0,cur,0,target,candidates);
        return res;
    }
};
