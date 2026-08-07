#include<cstring>
class Solution {
public:
    int tg[101][101];
    int solve(string& word1, string& word2,int i,int j){
        if(i==word1.size() && j==word2.size()){
            return 0;
        }
        if(i==word1.size()){
            return word2.size()-j;
        }
        if(j==word2.size()){
            return word1.size()-i;
        }
        if(word1[i]==word2[j]){
            return solve(word1,word2,i+1,j+1);
        }
        if(tg[i][j]!=-1){
            return tg[i][j];
        }
        int ins=1+solve(word1,word2,i,j+1);
        int del=1+solve(word1,word2,i+1,j);
        int replace=1+solve(word1,word2,i+1,j+1);
        return tg[i][j]=min({ins,del,replace});
    }
    int minDistance(string word1, string word2) {
        memset(tg,-1,sizeof(tg));
        return solve(word1,word2,0,0);
    }
};
