class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> hs;
        for(int n:nums){
            if(hs[n]>=1){
                return true;
            }
            hs[n]++;
        }
        return false;
    }
};