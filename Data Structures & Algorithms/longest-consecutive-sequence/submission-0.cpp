class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        int lo=0;
        for(int c:s){
            if(!s.count(c-1)){
                int cr=c;
                int str=1;
                while(s.count(cr+1)){
                    str++;
                    cr++;
                }
                lo=max(lo,str);  
            }
        }
        return lo;
    }
};
