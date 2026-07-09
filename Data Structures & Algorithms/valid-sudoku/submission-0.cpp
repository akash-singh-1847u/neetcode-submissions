class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> row[9];
        unordered_set<char> col[9];
        unordered_set<char> square[9];
        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                if(board[r][c]=='.'){
                    continue;
                }
                if(row[r].count(board[r][c]) || col[c].count(board[r][c]) || square[(r/3)*3+c/3].count(board[r][c])){
                    return false;
                }
                row[r].insert(board[r][c]);
                col[c].insert(board[r][c]);
                square[(r/3)*3+c/3].insert(board[r][c]);
            }
        }
        return true;
    }
};
