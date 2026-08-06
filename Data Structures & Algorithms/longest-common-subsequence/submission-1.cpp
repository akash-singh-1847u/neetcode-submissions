#include<cstring>
class Solution {
public:
    int tg[1001][1001];
    int solve(int i,int j,string& text1,string& text2){
        if(tg[i][j]!=-1){
            return tg[i][j];
        }
        if(i==text1.size() || j==text2.size()){
            tg[i][j]=0;
            return tg[i][j];
        }
        if(text1[i]==text2[j]){
            tg[i][j]=1+solve(i+1,j+1,text1,text2);
            return tg[i][j];
        }
        return tg[i][j]=max(solve(i+1,j,text1,text2),solve(i,j+1,text1,text2));
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(tg,-1,sizeof(tg));
        return solve(0,0,text1,text2);
    }
};
