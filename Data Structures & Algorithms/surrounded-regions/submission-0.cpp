class Solution {
public:
    vector<vector<int>> dr={{1,0},{-1,0},{0,1},{0,-1}};
    void dfs(vector<vector<char>>& board,int i,int j){
        int m=board.size();
        int n=board[0].size();
        board[i][j]='*';
        for(auto& d:dr){
            int new_i=i+d[0];
            int new_j=j+d[1];
            if(new_i>=0 && new_i<m && new_j>=0 && new_j<n && board[new_i][new_j]=='O'){
                dfs(board,new_i,new_j);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++){
            if(board[i][0]=='O'){
                dfs(board,i,0);
            }
            if(board[i][n-1]=='O'){
                dfs(board,i,n-1);
            }
        }
        for(int j=0;j<n;j++){
            if(board[0][j]=='O'){
                dfs(board,0,j);
            }
            if(board[m-1][j]=='O'){
                dfs(board,m-1,j);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O'){
                    board[i][j]='X';
                }
                if(board[i][j]=='*'){
                    board[i][j]='O';
                }
                
            }
        }
    }
};
