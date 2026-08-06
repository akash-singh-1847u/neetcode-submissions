class Solution {
public:
    set<string> st;
    int n;
    bool solve(int i,string s){
        n=s.size();
        if(i==n){
            return true;
        }
        for(int j=1;j<=n-i;j++){
            string temp=s.substr(i,j);
            if(st.find(temp)!=st.end()){
                if(solve(i+j,s)){
                    return true;
                }
            }
        }
        return false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        for(string s:wordDict){
            st.insert(s);
        }
        return solve(0,s);
    }
};
