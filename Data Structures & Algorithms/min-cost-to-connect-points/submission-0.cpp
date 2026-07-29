class Solution {
public:
    int prims(map<int,vector<pair<int,int>>>& mp,int n){
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> qu;
        qu.push({0,0});
        vector<bool> res(n,false);
        int sum=0;
        while(!qu.empty()){
            int dist=qu.top().first;
            int node=qu.top().second;
            qu.pop();
            if(res[node]){
                continue;
            }
            res[node]=true;
            sum+=dist;
            for(auto a:mp[node]){
                int neigh=a.first;
                int wt=a.second;
                if(!res[neigh]){
                    qu.push({wt,neigh});
                }
            }
        }
        return sum;
    }
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size();
        map<int,vector<pair<int,int>>> mp;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int x1=points[i][0];
                int y1=points[i][1];
                int x2=points[j][0];
                int y2=points[j][1];
                int dist=abs(x2-x1)+abs(y2-y1);
                mp[i].push_back({j,dist});
                mp[j].push_back({i,dist});
            }
        }
        return prims(mp,n);
    }
};
