class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=INT_MAX;
        int pr=0;
        for(int i=0;i<prices.size();i++){
            mn=min(mn,prices[i]);
            pr=max(pr,prices[i]-mn);
        }
        return pr;
    }
};
