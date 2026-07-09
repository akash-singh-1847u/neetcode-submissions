class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int> freq((n*n)+1,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                freq[grid[i][j]]++;
            }
        }
        int dupl;
        int miss;
        for(int i=1;i<freq.size();i++){
            if(freq[i]==2){
                dupl=i;
            }
            if(freq[i]==0){
                miss=i;
            }
        }
        return {dupl,miss};
    }
};