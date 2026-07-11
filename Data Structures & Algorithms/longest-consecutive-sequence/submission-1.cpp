class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st(nums.begin(),nums.end());
        int mx=0;
        for(int n:nums){
            if(!st.count(n-1)){
                int l=1;
                while(st.count(n+1)){
                    l++;
                    n++;
                    mx=max(mx,l);
                }
            }
        }
        return mx;
    }
};
