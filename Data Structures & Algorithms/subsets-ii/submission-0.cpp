class Solution {
public:
    int n;
    set<vector<int>> st;
    vector<vector<int>> res;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        n=nums.size();
        for(int i=0;i<(1<<n);i++){
            if(nums[i])
            vector<int> temp;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    temp.push_back(nums[j]);
                }
            }
            st.insert(temp);
        }
        return vector<vector<int>>(st.begin(),st.end());
    }
};
