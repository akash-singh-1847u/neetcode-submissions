class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int c:nums){
            mp[c]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto &k:mp){
            bucket[k.second].push_back(k.first);
        }
        vector<int> res;
        for(int i=nums.size();i>=0 && res.size()<k;i--){
            for(auto &x:bucket[i]){
                res.push_back(x);
                if(res.size()==k){
                    return res;
                }
            }
        }
    }
};
