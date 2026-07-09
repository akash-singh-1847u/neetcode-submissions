class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx_pr=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1]){
                mx_pr+=(prices[i]-prices[i-1]);
            }
        }
        return mx_pr;
    }
};