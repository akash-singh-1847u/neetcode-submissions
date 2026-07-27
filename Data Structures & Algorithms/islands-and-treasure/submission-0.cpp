class Solution {
public:
    vector<vector<int>> dr={{1,0},{-1,0},{0,1},{0,-1}};
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int,int>> qu;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    qu.push({i,j});
                }
            }
        }
        while(!qu.empty()){
            int i=qu.front().first;
            int j=qu.front().second;
            qu.pop();
            for(auto& d:dr){
                int new_i=i+d[0];
                int new_j=j+d[1];
                if(new_i<0 || new_i>=m || new_j<0 || new_j>=n || grid[new_i][new_j]!=2147483647){
                    continue;
                }
                qu.push({new_i,new_j});
                grid[new_i][new_j]=grid[i][j]+1;
            }
        }
    }
};
