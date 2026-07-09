class Solution {
public:
    int trap(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int left=height[l];
        int right=height[r];
        int ans=0;
        while(l<r){
            if(height[l]<height[r]){
                l++;
                left=max(left,height[l]);
                ans+=left-height[l];
            }
            else{
                r--;
                right=max(right,height[r]);
                ans+=right-height[r];
            }
        }
        return ans;
    }
};
