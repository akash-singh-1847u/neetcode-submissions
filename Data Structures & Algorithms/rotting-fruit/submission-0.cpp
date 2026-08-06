class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int minutes=0;
        int fresh=0;
        queue<pair<int,int>> qu;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    qu.push({i,j});
                }
                else if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        vector<vector<int>> dr={{1,0},{-1,0},{0,1},{0,-1}};
        while(!qu.empty()){
            int total=qu.size();
            while(total--){
                pair<int,int> p=qu.front();
                qu.pop();
                for(auto& d:dr){
                    int new_i=p.first+d[0];
                    int new_j=p.second+d[1];
                    if(new_i<0 || new_i>=m || new_j<0 || new_j>=n || grid[new_i][new_j]!=1){
                        continue;
                    }
                    qu.push({new_i,new_j});
                    grid[new_i][new_j]=2;
                    fresh--;
                }
            }
            minutes++;
            if(fresh==0){
                return minutes;
            }
        }
        return -1;
    }
};
