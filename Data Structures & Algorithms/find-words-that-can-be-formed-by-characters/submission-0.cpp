class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char,int>mp;
        for(char c:chars){
            mp[c]++;
        }
        int a=0;
        for(string s:words){
            map<char,int> mp2;
            for(char c:s){
                mp2[c]++;
            }
            bool ok=true;
            for(auto p:mp2){
                if(p.second>mp[p.first]){
                    ok=false;
                    break;
                }
            }
            if(ok){
                a+=s.size();
            }
        }
        return a;
    }
};