class Solution {
public:
    void dfs(int n,map<int,vector<int>>& mp, vector<bool>& vis){
        vis[n]=true;
        for(int a:mp[n]){
            if(!vis[a]){
                dfs(a,mp,vis);
            }
        }
    }
    bool validTree(int n, vector<vector<int>>& edges) {
        if(edges.size()!=n-1){
            return false;
        }
        map<int,vector<int>> mp;
        for(auto ar:edges){
            int a=ar[0];
            int b=ar[1];
            mp[a].push_back(b);
            mp[b].push_back(a);
        }
        vector<bool> vis(n,false);
        dfs(0,mp,vis);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                return false;
            }
        }
        return true;
    }
};
