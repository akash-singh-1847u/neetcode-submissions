class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int l=0;
        int mxf=0;
        int rs=0;
        for(int r=0;r<s.size();r++){
            mp[s[r]]++;
            mxf=max(mxf,mp[s[r]]);
            while((r-l+1)-mxf>k){
                l++;
                mp[s[l]]--;
            }
            rs=max(rs,r-l+1);
        }
        return rs;
    }
};
