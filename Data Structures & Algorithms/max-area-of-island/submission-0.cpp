class Solution {
public:
    void dfs(int i,int j,int m,int n,vector<vector<int>>& grid,int& area){
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]==0){
            return;
        }
        area++;
        grid[i][j]=0;
        dfs(i+1,j,m,n,grid,area);
        dfs(i-1,j,m,n,grid,area);
        dfs(i,j+1,m,n,grid,area);
        dfs(i,j-1,m,n,grid,area);
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int area=0;
                if(grid[i][j]==1){
                    dfs(i,j,m,n,grid,area);
                    ans=max(ans,area);
                }
            }
        }
        return ans;
    }
};
