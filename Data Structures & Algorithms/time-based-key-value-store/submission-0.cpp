class TimeMap {
public:
    map<string,vector<pair<int,string>>>mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        int l=0;
        int r=mp[key].size()-1;
        int ans=-1;
        vector<pair<int,string>> &v=mp[key];
        while(l<=r){
            int mid=l+(r-l)/2;
            if(v[mid].first<=timestamp){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        if(ans==-1){
            return "";
        }
        return v[ans].second;
    }
};
