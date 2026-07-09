class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> window1(26,0);
        vector<int> window2(26,0);
        for(char c:s1){
            window1[c-'a']++;
        }
        if(s1.size()>s2.size()){
            return false;
        }
        for(int i=0;i<s1.size();i++){
            window2[s2[i]-'a']++;
        }
        if(window1==window2){
            return true;
        }
        int l=0;
        for(int r=s1.size();r<s2.size();r++){
            window2[s2[l]-'a']--;
            l++;
            window2[s2[r]-'a']++;
            if(window1==window2){
                return true;
                break;
            }
        }
        return false;
    }
};
