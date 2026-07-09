class Solution {
public:
    void merge(vector<int>& nums,int l,int r,int mid){
        vector<int> ans;
        int i=l;
        int j=mid+1;
        while(i<=mid && j<=r){
            if(nums[i]<=nums[j]){
                ans.push_back(nums[i]);
                i++;
            }
            else{
                ans.push_back(nums[j]);
                j++;
            }
        }
        while(i<=mid){
            ans.push_back(nums[i]);
            i++;
        }
        while(j<=r){
            ans.push_back(nums[j]);
            j++;
        }
        for(int k=l;k<=r;k++){
            nums[k]=ans[k-l];
        }
    }
    void mergesort(vector<int>& nums,int l,int r){
        if(l>=r){
            return;
        }
        int mid=l+(r-l)/2;
        mergesort(nums,l,mid);
        mergesort(nums,mid+1,r);
        merge(nums,l,r,mid);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};