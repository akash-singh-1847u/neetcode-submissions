class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int s=0;
        int ans=0;
        if(amount==0){
            return 0;
        }
        while(s<amount){
            int ar=INT_MIN;
            for(int i=0;i<coins.size();i++){
                if(ar<amount){
                    ar=max(ar,coins[i]);
                }
            }
            s+=ar;
            ans++;
            if(s>amount){
                return -1;
            }
            
        }
    }
};
