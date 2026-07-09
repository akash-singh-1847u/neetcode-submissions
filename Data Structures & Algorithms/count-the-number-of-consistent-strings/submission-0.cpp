class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char,int> mp1;
        for(char a:allowed){
            mp1[a]=1;
        }
        int ans=0;
        for(string a:words){
            bool ok=true;
            for(char p:a){
                if(mp1[p]!=1){
                    ok=false;
                    break;
                }
            }
            if(ok){
                ans++;
            }
        }
        return ans;
    }
};