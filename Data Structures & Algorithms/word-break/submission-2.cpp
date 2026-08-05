class Solution {
public:
    int tg[201];
    set<string> st;
    int n;
    bool solve(int i,string s){
        n=s.size();
        if(i==n){
            return true;
        }
        if(tg[i]!=-1){
            return tg[i];
        }
        for(int j=1;j<=n-i;j++){
            string temp=s.substr(i,j);
            if(st.find(temp)!=st.end()){
                if(solve(i+j,s)){
                    return tg[i]=true;
                }
            }
        }
        tg[i]=false;
        return false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        for(string s:wordDict){
            st.insert(s);
        }
        for(int i=0;i<201;i++){
            tg[i]=-1;
        }
        return solve(0,s);
    }
};
