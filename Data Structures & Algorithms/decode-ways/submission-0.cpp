class Solution {
public:

    int numDecodings(string s) {
        map<string,string> mp;
        for(int i=0;i<26;i++){
            // mp[to_alpha(65+i)]=to_string(i+1);
            // mp[to_string(i+1)]=to_alpha(65+i);
        }
        if(s.size()==1 && s[0]!=0){
            return 1;
        }
    }
};
