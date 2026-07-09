class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                l++;
            }
            else if(i+1<s.size() && s[i+1]!=' '){
                l=0;
            }
        }
        return l;
    }
};