class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int> h;
        for(char c:s){
            h[c]++;
        }
        for(char d:t){
            h[d]--;
        }
        for(auto &c:h){
            if(c.second!=0){
                return false;
            }
        }
        return true;
    }
};
