class Solution {
public:
    int c=0;
    void solve(string& rs,int i,int j){
        int l=i;
        int r=j;
        while(l>=0 && r<rs.size() && rs[l]==rs[r]){
            c++;
            l--;
            r++;
        }
        return;
    }
    int countSubstrings(string s) {
        int n=s.size();
        for(int i=0;i<n;i++){
            solve(s,i,i);
            solve(s,i,i+1);
        }
        return c;
    }
};
