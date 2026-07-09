class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> n;
        for(int i=0;i<nums.size();i++){
            n.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            n.push_back(nums[i]);
        }
        return n;
    }
};