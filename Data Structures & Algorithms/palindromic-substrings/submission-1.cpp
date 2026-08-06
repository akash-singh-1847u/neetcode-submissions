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
        int n=s.size();
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(solve(s,i,j)){
                    c++;
                }
            }
        }
        return c;
    }
};
