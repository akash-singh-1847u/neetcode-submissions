class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> mp1;
        for(char c:magazine){
            mp1[c]++;
        }
        map<char,int> mp2;
        for(char c:ransomNote){
            mp2[c]++;
            if(mp2[c]>mp1[c]){
                return false;
            }
        }
        return true;
    }
};