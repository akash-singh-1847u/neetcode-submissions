#include<cstring>
class Solution {
public:
    int tg[5001][2];
    int solve(int i,vector<int>& prices,int free_to_buy){
        if(tg[i][free_to_buy]!=-1){
            return tg[i][free_to_buy];
        }
        if(i>=prices.size()){
            tg[i][free_to_buy]=0;
            return tg[i][free_to_buy];
        }
        if(free_to_buy){
            return tg[i][free_to_buy]=max(-prices[i]+solve(i+1,prices,0),solve(i+1,prices,1)); // free_to_buy=1 means not stock we can buy new 
        }
        else{
            return tg[i][free_to_buy]=max(prices[i]+solve(i+2,prices,1),solve(i+1,prices,0));
        }
    }
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1){
            return 0;
        }
        memset(tg,-1,sizeof(tg));
        return solve(0,prices,1);
    }
};
