class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX;
        int mx=0;
        for(int i=0;i<prices.size();i++){
            buy=min(buy,prices[i]);
            mx=max(mx,prices[i]-buy);
        }
        return mx;
    }
};
