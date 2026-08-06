class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        map<int,vector<pair<int,int>>> mp;
        for(auto ar:flights){
            mp[ar[0]].push_back({ar[1],ar[2]});
        }
        vector<int> res(n,INT_MAX);
        res[src]=0;
        queue<pair<int,int>> qu;
        qu.push({src,res[src]});
        int c=0;
        while(!qu.empty() && c<=k){
            int n=qu.size();
            while(n--){
                int node=qu.front().first;
                int cost=qu.front().second;
                qu.pop();
                c++;
                for(auto arr:mp[node]){
                    int node2=arr.first;
                    int wt=arr.second;
                    if(cost+wt<res[node2]){
                        res[node2]=cost+wt;
                        qu.push({node2,cost+wt});
                    }
                }
            }
            
        }
        return res[dst]==INT_MAX? -1:res[dst];
    }
};
