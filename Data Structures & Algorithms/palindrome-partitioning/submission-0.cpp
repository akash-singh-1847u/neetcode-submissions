class Solution {
public:
    vector<vector<string>>res;
    bool palin(string& s,int l,int r){
        while(l<=r){
            if(s[l]!=s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    void solve(vector<string>& cur, int idx, int n,string& s){
        if(idx==n){
            res.push_back(cur);
        }
        for(int i=idx;i<n;i++){
            if(palin(s,idx,i)){
                cur.push_back(s.substr(idx,i-idx+1));
                solve(cur,i+1,n,s);
                cur.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        int n=s.size();
        vector<string> cur;
        solve(cur,0,n,s);
        return res;
    }
};
