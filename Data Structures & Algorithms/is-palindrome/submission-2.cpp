class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> mp;
        for(char c:s){
            if(isalnum(c)){
                mp.push_back(tolower(c));
            }
        }
        int l=0;
        int r=mp.size()-1;
        while(l<=r){
            if(mp[l]!=mp[r]){
                return false;
            }
            else{
                l++;
                r--;
            }
        }
        return true;
    }
};
