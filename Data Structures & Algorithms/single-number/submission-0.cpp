class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mp;
        for(int c:nums){
            mp[c]++;
        }
        for(int c:nums){
            if(mp[c]==1){
                return c;
            }
        }
    }
};
