class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size()<t.size()){
            return "";
        }
        map<char,int> mp;
        for(char c:t){
            mp[c]++;
        }
        map<char,int> window;
        int l=0;
        int need=mp.size();
        int have=0;
        int startidx=0;
        int minindex=INT_MAX;
        for(int r=0;r<s.size();r++){
            window[s[r]]++;
            if(mp.count(s[r]) && window[s[r]]==mp[s[r]]){
                have++;
            }
            while(have==need){
                if(r-l+1<minindex){
                    minindex=r-l+1;
                    startidx=l;
                }
                window[s[l]]--;
                if(mp.count(s[l]) && window[s[l]]<mp[s[l]]){
                    have--;
                }
                l++;
            }
        }
        if(minindex==INT_MAX){
            return "";
        }
        else{
            return s.substr(startidx,minindex);
        }
    }
};
