class Solution {
public:
    queue<int> qu;
    bool topological_sort(map<int,vector<int>>& mp,vector<int>& indegree,int numCourses){
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0){
                qu.push(i);
            }
        }
        int n=0;
        while(!qu.empty()){
            int u=qu.front();
            qu.pop();
            n++;
            for(auto v:mp[u]){
                indegree[v]--;
                if(indegree[v]==0){
                    qu.push(v);
                }
            }
        }
        if(n==numCourses){
            return true;
        }
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        map<int,vector<int>> mp;
        vector<int> indegree(numCourses,0);
        for(auto ar:prerequisites){
            int a=ar[0];
            int b=ar[1];
            indegree[a]++;
            mp[b].push_back(a);
        }
        return topological_sort(mp,indegree,numCourses);
    }
};
