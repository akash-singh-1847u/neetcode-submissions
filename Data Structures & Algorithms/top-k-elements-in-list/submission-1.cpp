class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int k:nums){
            mp[k]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto p:mp){
            bucket[p.second].push_back(p.first);
        }
        vector<int> res;
        for(int i=nums.size();i>=0 && res.size()<k;i--){
            for(int n:bucket[i]){
                res.push_back(n);
                if(res.size()==k){
                    return res;
                }
            }
        }
    }
};
