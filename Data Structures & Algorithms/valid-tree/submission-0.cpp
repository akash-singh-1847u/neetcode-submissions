class Solution {
public:
    bool dfs(int curr,int parent,int n,vector<vector<int>>& edges,map<int,vector<int>>& mp,vector<bool>& s){
        if(s[curr]){
            return false;;
        }
        s[curr]=true;
        for(int a:mp[curr]){
            if(a==parent){
                continue;
            }
            if(!dfs(a,curr,n,edges,mp,s)){
                return false;
            }
        }
        return true;
    }
    bool validTree(int n, vector<vector<int>>& edges) {
        if(n==0){
            return true;
        }
        map<int,vector<int>> mp;
        for(auto ar:edges){
            int a=ar[0];
            int b=ar[1];
            mp[a].push_back(b);
            mp[b].push_back(a);
        }
        vector<bool> s(n,false);
        if(!dfs(0,-1,n,edges,mp,s)){
            return false;
        }
        for(int i=0;i<n;i++){
            if(!s[i]){
                return false;
            }
        }
        return true;
    }
};
