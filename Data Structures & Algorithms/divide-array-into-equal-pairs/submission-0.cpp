class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int>fr;
        for(int x:nums){
            fr[x]++;
        }
        for(auto m:fr){
            if(m.second%2!=0){
                return false;
            }
        }
        return true;
    }
};