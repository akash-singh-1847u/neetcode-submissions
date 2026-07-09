class Solution {
public:
    void heap(vector<int> &a,int n,int i){
        int largest=i;
        int left=2*i+1;
        int right=2*i+2;
        if(left<n && a[left]>a[largest]){
            largest=left;
        }
        if(right<n && a[right]>a[largest]){
            largest=right;
        }
        if(largest!=i){
            swap(a[i],a[largest]);
            heap(a,n,largest);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for(int i=n/2-1;i>=0;i--){
            heap(nums,n,i);
        }
        for(int i=n-1;i>0;i--){
            swap(nums[0],nums[i]);
            heap(nums,i,0);
        }
        return nums;
    }
};
