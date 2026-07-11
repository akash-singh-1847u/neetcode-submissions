class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mp;
        int m=s.size();
        int n=t.size();
        for(int i=0;i<m && i<n;i++){
            if(mp.count(s[i]) && mp[s[i]]!=t[i]){
                return false;
            }
            mp[s[i]]=t[i];
        }
        return true;
    }
};