class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0;
        int candidate=0;
        for(int n:nums){
            if(c==0){
                candidate=n;
                c++;
            }
            else if(candidate==n){
                c++;
            }
            else{
                c--;
            }
        }
        return candidate;
    }
};