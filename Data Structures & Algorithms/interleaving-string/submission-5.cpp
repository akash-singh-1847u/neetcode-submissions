
class Solution {
public:
    int tg[101][101];
    bool solve(string s1, string s2, string s3,int i,int j){
        if(s1.size()+s2.size()!=s3.size()){
            return false;
        }
        if(i==s1.size() && j==s2.size()){
            return true;
        }
        if(tg[i][j]!=-1){
            return tg[i][j];
        }
        bool ans=false;
        int k=i+j;
        if(s1[i]==s3[k]){
            ans=ans || solve(s1,s2,s3,i+1,j);
        }
        if(s2[j]==s3[k]){
            ans=ans || solve(s1,s2,s3,i,j+1);
        }
        tg[i][j]=ans;
        return ans;
    }
    bool isInterleave(string s1, string s2, string s3) {
        if(s1=="" && s2=="" && s3==""){
            return true;
        }
        for(int i=0;i<101;i++){
            for(int j=0;j<101;j++){
                tg[i][j]=-1;
            }
        }
        return solve(s1,s2,s3,0,0);
    }
};
