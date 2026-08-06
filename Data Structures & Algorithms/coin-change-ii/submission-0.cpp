#include<cstring>
class Solution {
public:
    int tg[101][5001];
    int solve(int i,vector<int>& coins,int amount){
        if(amount<0){
            return 0;
        }
        if(i>=coins.size()){
            return 0;
        }
        if(amount==0){
            return 1;
        }
        if(tg[i][amount]!=-1){
            return tg[i][amount];
        }
        int take=solve(i,coins,amount-coins[i]);
        int leave=solve(i+1,coins,amount);
        return tg[i][amount]=take+leave;
    }
    int change(int amount, vector<int>& coins) {
        memset(tg,-1,sizeof(tg));
        return solve(0,coins,amount);
    }
};
