class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int l=0;
        int r=m*n-1;
        while(l<=r){
            int mid=(l+r)/2;
            int ro=mid/n;
            int c=mid%n;
            if(matrix[ro][c]==target){
                return true;
            }
            else if(matrix[ro][c]>target){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return false;
    }
};
