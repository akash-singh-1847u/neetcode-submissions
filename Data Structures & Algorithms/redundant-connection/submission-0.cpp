class DSU{
public:
    vector<int> parent;
    vector<int> rank;
    DSU(int n){
        parent.resize(n+1);
        rank.resize(n+1);
        for(int i=1;i<=n;i++){
            parent[i]=i;
            rank[i]=0;
        }
    }
    int find(int n){
        if(n==parent[n]){
            return n;
        }
        return parent[n]=find(parent[n]);
    }
    void Union(int x,int y){
        int parent_x=find(x);
        int parent_y=find(y);
        if(parent_x==parent_y){
            return;
        }
        else if(rank[parent_x]>rank[parent_y]){
            parent[parent_y]=parent_x;
        }
        else if(rank[parent_y]>rank[parent_x]){
            parent[parent_x]=parent_y;
        }
        else if(rank[parent_x]==rank[parent_y]){
            parent[parent_y]=parent_x;
            rank[parent_x]++;
        }
    }
};
class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        DSU dsu(n);
        map<int,vector<int>> mp;
        for(auto edge:edges){
            int u=edge[0];
            int v=edge[1];
            if(dsu.find(u)==dsu.find(v)){
                return edge;
            }
            dsu.Union(u,v);
        }
        return {};
    }
};
