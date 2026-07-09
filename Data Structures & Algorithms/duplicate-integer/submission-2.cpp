class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hs;
        for(int n:nums){
            if(hs.count(n)){
                return true;
            }
            hs.insert(n);
        }
        return false;
    }
};