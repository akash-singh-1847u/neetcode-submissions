class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount<1){
            return 0;
        }
        vector<int> res(amount+1,amount+1);
        res[0]=0;
        for(int i=1;i<=amount;i++){
            for(int j=0;j<coins.size();j++){
                if(coins[j]<=i){
                    res[i]=min(res[i],1+res[i-coins[j]]);
                }
            }
        }
        return res[amount]==amount+1?-1:res[amount];
    }
};
