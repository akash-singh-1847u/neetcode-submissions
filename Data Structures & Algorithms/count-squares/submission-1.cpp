class CountSquares {
public:
    map<pair<int,int>,int> mp;
    CountSquares() {
        
    }
    
    void add(vector<int> point) {
        mp[{point[0],point[1]}]++;
    }
    
    int count(vector<int> point) {
        int x=point[0];
        int y=point[1];
        int ans=0;
        for(auto ar:mp){
            int x2=ar.first.first;
            int y2=ar.first.second;
            //as we are only concerned with only corner point so we have ignore
            //those point which are in same horizontal line or vertical line
            if(x2==x || y2==y){
                continue;
            }
            if(abs(x-x2)!=abs(y-y2)){
                continue;
            }
            int x3=x;
            int y3=y2;
            int x4=x2;
            int y4=y;
            ans+=ar.second*mp[{x3,y3}]*mp[{x4,y4}];
        }
        return ans;
    }
};
