class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int> mp;
        for(char c:text){
            if(c=='b' || c=='a' || c=='l' || c=='o' || c=='n'){
                mp[c]++;
            }
        }
        int mn=INT_MAX;
        mp['l']/2;
        mp['o']/2;
        string c="balon";
        for(char m:c){
            mn=min(mn,mp[m]);
        }
        return mn;
    }
};