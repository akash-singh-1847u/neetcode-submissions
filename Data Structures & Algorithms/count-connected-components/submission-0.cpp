class Solution {
public:
    void dfs(int i,vector<int>& vis,map<int,vector<int>>& mp){
        vis[i]++;
        for(int a:mp[i]){
            if(!vis[a]){
                dfs(a,vis,mp);
            }
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        if(n==0){
            return 0;
        }
        map<int,vector<int>> mp;
        for(auto ar:edges){
            int a=ar[0];
            int b=ar[1];
            mp[b].push_back(a);
            mp[a].push_back(b);
        }
        int c=0;
        vector<int> vis(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                c++;
                dfs(i,vis,mp);
            }
        }
        return c;
    }
};
