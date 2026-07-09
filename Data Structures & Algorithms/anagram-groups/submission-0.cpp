class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> m;
        for(string a:strs){
            string k=a;
            sort(k.begin(),k.end());
            m[k].push_back(a);
        }
        vector<vector<string>> ans;
        for(auto j:m){
            ans.push_back(j.second);
        }
        return ans;
    }
};
