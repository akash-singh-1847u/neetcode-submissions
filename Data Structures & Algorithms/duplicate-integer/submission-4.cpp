class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(int n:nums){
            mp[n]++;
            if(mp[n]>1){
                return true;
            }
        }
        return false;
    }
};