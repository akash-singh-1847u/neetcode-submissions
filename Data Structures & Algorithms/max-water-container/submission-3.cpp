class Solution {
public:
    int maxArea(vector<int>& heights) {
        int mx=0;
        int l=0;
        int r=heights.size()-1;
        int ar=0;
        while(l<r){
            ar=min(heights[l],heights[r])*(r-l);
            mx=max(mx,ar);
            if(heights[l]<heights[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return mx;
    }
};
