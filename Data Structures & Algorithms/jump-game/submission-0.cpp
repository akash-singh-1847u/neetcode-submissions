class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_far=0;
        for(int i=0;i<nums.size();i++){
            if(i>max_far){
                return false;
            }
            max_far=max(max_far,i+nums[i]);
        }
        return true;
    }
};
