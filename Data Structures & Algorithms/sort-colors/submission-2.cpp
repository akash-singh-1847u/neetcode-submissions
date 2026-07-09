class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0;
        int o=0;
        int t=0;
        for(int c:nums){
            if(c==0) z++;
            else if(c==1) o++;
            else t++;
        }
        int i=0;
        while(z--){
            nums[i++]=0;
        }
        while(o--){
            nums[i++]=1;
        }
        while(t--){
            nums[i++]=2;
        }
    }
};