class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> fr(nums.size()+1,0);
        for(int n:nums){
            fr[n]++;
        }
        vector<int> ar;
        for(int i=1;i<fr.size();i++){
            if(fr[i]==0){
                ar.push_back(i);
            }
        }
        return ar;
    }
};