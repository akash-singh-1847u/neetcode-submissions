class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int l=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(mp.count(s[i])){
                l=mp[s[i]]+1;
            }
            mp[s[i]]=i;
            ans=max(ans,i-l+1);
        }
        return ans;
    }
};
