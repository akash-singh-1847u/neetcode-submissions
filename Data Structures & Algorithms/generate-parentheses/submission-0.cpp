class Solution {
public:
    vector<string> res;
    void solve(string& cur, int open, int close,int n){
        if(cur.size()==2*n){
            res.push_back(cur);
            return;
        }
        if(open<n){
            cur+="(";
            solve(cur,open+1,close,n);
            cur.pop_back();
        }
        if(close<open){
            cur+=")";
            solve(cur,open,close+1,n);
            cur.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        int open=0;
        int close=0;
        string cur;
        solve(cur,open,close,n);
        return res;
    }
};
