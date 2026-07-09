class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mp1;
        map<char,char> mp2;
        int m=s.size();
        int n=t.size();
        for(int i=0;i<m && i<n;i++){
            if(mp1.count(s[i]) && mp1[s[i]]!=t[i]){
                return false;
            }
            if(mp2.count(t[i]) && mp2[t[i]]!=s[i]){
                return false;
            }
            mp1[s[i]]=t[i];
            mp2[t[i]]=s[i];
        }
        return true;
    }
};