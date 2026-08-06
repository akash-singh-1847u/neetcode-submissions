#include<cstring>
class Solution {
public:
    int c=0;
    int tg[101][101];
    int solve(int i,int j,int m,int n){
        if(i<0 || i>=m || j<0 || j>=n){
            return 0;
        }
        if(tg[i][j]!=-1){
            return tg[i][j];
        }
        if(i==m-1 && j==n-1){
            return 1;
        }
        tg[i][j]=solve(i+1,j,m,n)+solve(i,j+1,m,n);
        return tg[i][j];
    }
    int uniquePaths(int m, int n) {
        if(m==0 && n==0){
            return 0;
        }
        memset(tg,-1,sizeof(tg));
        return solve(0,0,m,n);
    }
};
