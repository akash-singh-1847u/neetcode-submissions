class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        queue<pair<int,int>> qu;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    qu.push({i,j});
                }
            }
        }
        while(!qu.empty()){
            pair<int,int> p=qu.front();
            qu.pop();
            int i=p.first;
            int j=p.second;
            for(int k=0;k<n;k++){
                matrix[i][k]=0;
            }
            for(int k=0;k<m;k++){
                matrix[k][j]=0;
            }
        }
    }
};
