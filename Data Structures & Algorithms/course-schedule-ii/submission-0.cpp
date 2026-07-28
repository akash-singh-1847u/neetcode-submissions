class Solution {
public:
    vector<int> topological_sort(map<int,vector<int>>& mp,vector<int>& indegree,int numCourses){
        queue<int> qu;
        vector<int> res;
        int n=0;
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0){
                qu.push(i);
            }
        }
        while(!qu.empty()){
            int u=qu.front();
            res.push_back(u);
            qu.pop();
            n++;
            for(auto a:mp[u]){
                indegree[a]--;
                if(indegree[a]==0){
                    qu.push(a);
                }
            }
        }
        if(n==numCourses){
            return res;
        }
        return {};
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        map<int,vector<int>> mp;
        vector<int> indegree(numCourses,0);
        for(auto i:prerequisites){
            int a=i[0];
            int b=i[1];
            mp[b].push_back(a);
            indegree[a]++;
        }
        return topological_sort(mp,indegree,numCourses);
    }
};
