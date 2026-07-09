class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int l=0;
        int r=k;
        vector<int> ans;
        for(int i=0;i<=nums.size()-k;i++){
            int mx=INT_MIN;
            for(int j=i;j<i+k;j++){
                if(nums[j]>mx){
                    mx=nums[j];
                }
            }
            ans.push_back(mx);
        }
        return ans;
    }
};
