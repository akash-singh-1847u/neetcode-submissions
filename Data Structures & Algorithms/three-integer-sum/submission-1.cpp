class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size()-2;i++){
            int l=i+1;
            int r=nums.size()-1;
            while(l<r){
                if(nums[i]+nums[l]+nums[r]==0){                    
                    ans.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                }
                else if(nums[i]+nums[l]+nums[r]<0){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        return ans;
    }
};
