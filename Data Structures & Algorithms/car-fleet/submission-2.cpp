class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,float>>s;
        for(int i=0;i<position.size();i++){
            float t=(target-position[i])/speed[i];
            s.push_back({position[i],t});
        }
        sort(s.begin(),s.end());
        int fleet=0;
        int brd=0;
        for(int i=position.size()-1;i>=0;i--){
             if(brd<s[i].second){
                fleet++;
                brd=s[i].second;
             }
        }
        return fleet;
    }
};
