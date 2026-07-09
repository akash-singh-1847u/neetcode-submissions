class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int l=nums.size();
        int r=nums.size();
        vector<int> left(l);
        left[0]=1;
        for(int i=1;i<l;i++){
            left[i]=left[i-1]*nums[i-1];
        }
        vector<int> right(r);
        right[r-1]=1;
        for(int i=r-2;i>=0;i--){
            right[i]=right[i+1]*nums[i+1];
        }
        vector<int> res(l);
        for(int i=0;i<l;i++){
            res[i]=left[i]*right[i];
        }
        return res;
    }
};
