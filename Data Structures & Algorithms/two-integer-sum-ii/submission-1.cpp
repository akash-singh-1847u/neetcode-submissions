class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> mp;
        vector<int> m;
        for(int i=1;i<numbers.size()+1;i++){
            int n=target-numbers[i-1];
            if(mp.find(n)!=mp.end()){
                return{mp[n],i};
            }
            mp[numbers[i-1]]=i;   
        }
        return {};
    }
};
