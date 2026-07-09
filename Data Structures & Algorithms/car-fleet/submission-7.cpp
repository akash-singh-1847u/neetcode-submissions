class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
         vector<pair<int,double>> mp;
         for(int i=0;i<position.size();i++){
            mp.push_back({position[i],(double)(target-position[i])/speed[i]});
         }
         sort(mp.begin(),mp.end());
         int fleet=0;
         double previous=0;
         for(int i=mp.size()-1;i>=0;i--){
            if(mp[i].second>previous){
                fleet++;
                previous=mp[i].second;
            }
         }
         return fleet;
    }
};
