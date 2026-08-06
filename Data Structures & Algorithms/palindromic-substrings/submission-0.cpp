class Solution {
public:
    bool solve(string& rs,int i,int j){
        if(i==j){
            return true;
        }
        int l=i;
        int r=j;
        while(l<r){
            if(rs[l]==rs[r]){
                l++;
                r--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    int countSubstrings(string s) {
        vector<string> res;
        int n=s.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                string tmp=s.substr(i,j-i+1);
                res.push_back(tmp);
            }
        }
        int c=0;
        for(string rs:res){
            if(solve(rs,0,rs.size()-1)){
                c++;
            }
        }
        return c;
    }
};
