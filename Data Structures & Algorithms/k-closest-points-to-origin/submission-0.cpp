class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,vector<int>>> maxheap;
        for(int i=0;i<points.size();i++){
            int x=points[i][0];
            int y=points[i][1];
            int dst=x*x+y*y;
            maxheap.push({dst,points[i]});    
            while(maxheap.size()>k){
                maxheap.pop();
            }
        }
        vector<vector<int>> ans;
        while(!maxheap.empty()){
            ans.push_back(maxheap.top().second);
            maxheap.pop();
        }
        return ans;
    }
};
