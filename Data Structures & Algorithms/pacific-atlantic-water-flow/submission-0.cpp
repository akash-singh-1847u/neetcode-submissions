class Solution {
public:
    vector<vector<int>> dr={{1,0},{-1,0},{0,1},{0,-1}};
    void dfs(vector<vector<int>>& height,int i,int j,vector<vector<bool>>& visited){
        int m=height.size();
        int n=height[0].size();
        if(i<0 || i>=m || j<0 || j>=n || visited[i][j]==true){
            return;
        }
        visited[i][j]=true;
        for(auto &d:dr){
            int new_i=i+d[0];
            int new_j=j+d[1];
            if(new_i>=0 && new_i<m && new_j>=0 && new_j<n && height[new_i][new_j] >= height[i][j]){
                dfs(height,new_i,new_j,visited);
            }
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m=heights.size();
        int n=heights[0].size();
        vector<vector<bool>>atlantic (m,vector<bool>(n,false));
        vector<vector<bool>>pacific (m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            dfs(heights,i,0,pacific);
        }
        for(int i=0;i<n;i++){
            dfs(heights,0,i,pacific);
        }
        for(int i=0;i<n;i++){
            dfs(heights,m-1,i,atlantic);
        }
        for(int i=0;i<m;i++){
            dfs(heights,i,n-1,atlantic);
        }
        vector<vector<int>> res;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(pacific[i][j] && atlantic[i][j]){
                    res.push_back({i,j});
                }
            }
        }
        return res;
    }
};
