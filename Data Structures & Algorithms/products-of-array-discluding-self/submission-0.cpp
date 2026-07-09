class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int j=0;
        int p=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                j++;    
            }
            else{
                p*=nums[i];
            }
        }
        for(int i=0;i<nums.size();i++){
            if(j>1){
                ans.push_back(0);
            }
            else if(j==1){
                if(nums[i]==0){
                    ans.push_back(p);
                }
                else{
                    ans.push_back(0);
                }
            }
            else{
                ans.push_back(p/nums[i]);
            }
        }
        return ans;
    }
};
