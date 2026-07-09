class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> mp1;
        for(char c:magazine){
            mp1[c]++;
        }
        for(char c:ransomNote){
            mp1[c]--;
            if(mp1[c]<0){
                return false;
            }
        }
        return true;
    }
};