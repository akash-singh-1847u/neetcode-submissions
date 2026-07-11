class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> mp;
        vector<int> m;
        for(int i=0;i<numbers.size();i++){
            int n=target-numbers[i];
            if(mp.find(n)!=mp.end()){
                return{mp[n],numbers[i]};
            }
            mp[numbers[i]]=numbers[i];    
        }
        return {};
    }
};
