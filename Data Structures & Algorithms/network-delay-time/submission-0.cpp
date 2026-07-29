class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        map<int,vector<pair<int,int>>> mp;
        for(auto ar:times){
            mp[ar[0]].push_back({ar[1],ar[2]});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<int> res(n+1,INT_MAX);
        res[k]=0;
        pq.push({0,k});
        while(!pq.empty()){
            int dist=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            for(auto ar:mp[node]){
                int node2=ar.first;
                int wt=ar.second;
                if(dist+wt<res[node2]){
                    res[node2]=dist+wt;
                    pq.push({dist+wt,node2});
                }
            }
        }
        int ans=INT_MIN;
        for(int i=1;i<=n;i++){
            ans=max(ans,res[i]);
        }
        return ans==INT_MAX? -1:ans;
    }
};
