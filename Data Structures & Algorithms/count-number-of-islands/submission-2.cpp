class Solution {
public:
    // void dfs(vector<vector<char>>& grid, int i,int j,int row,int col){
    //     if(i<0 || i>=row || j<0 || j>=col || grid[i][j]!='1'){
    //         return;
    //     }
    //     if(grid[i][j]=='#'){
    //         return;
    //     }
    //     grid[i][j]='#';
    //     dfs(grid,i+1,j,row,col);
    //     dfs(grid,i-1,j,row,col);
    //     dfs(grid,i,j+1,row,col);
    //     dfs(grid,i,j-1,row,col);
    // }
    vector<vector<int>> dr={{1,0},{-1,0},{0,1},{0,-1}};
    void bfs(vector<vector<char>>& grid, int i,int j,int row,int col){
        queue<pair<int,int>> qu;
        qu.push({i,j});
        grid[i][j]='#';
        while(!qu.empty()){
            auto it=qu.front();
            qu.pop();
            for(auto &d:dr){
                int new_i=it.first+d[0];
                int new_j=it.second+d[1];
                if(new_i<0 || new_i>=row || new_j<0 || new_j>=col || grid[new_i][new_j]!='1'){
                    continue;
                }
                else{
                    grid[new_i][new_j]='#';
                    qu.push({new_i,new_j});
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int k=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1'){
                    bfs(grid,i,j,row,col);
                    k++;
                }
            }
        }
        return k;
    }
};
