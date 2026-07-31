class Solution {
public:
    // int tg[101];
    // int solve(int i,vector<int>& cost){
    //     if(i>=cost.size()){
    //         return 0;
    //     }
    //     if(tg[i]!=-1){
    //         return tg[i];
    //     }
    //     int a=cost[i]+solve(i+1,cost);
    //     int b=cost[i]+solve(i+2,cost);
    //     return tg[i]=min(a,b);
    // }
    int minCostClimbingStairs(vector<int>& cost) {
        int tgt=cost.size();
        // memset(tg,-1,sizeof(tg));
        // return min(solve(0,cost),solve(1,cost));
        for(int i=2;i<tgt;i++){
            cost[i]=cost[i]+min(cost[i-1],cost[i-2]);
        }
        return min(cost[tgt-1],cost[tgt-2]);
    }
};
