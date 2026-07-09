class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0];
        int fst=nums[0];
        do{
            slow=nums[slow];
            fst=nums[nums[fst]];
        }while(slow!=fst);
        slow=nums[0];
        while(slow!=fst){
            slow=nums[slow];
            fst=nums[fst];
        }
        return slow;
    }
};
