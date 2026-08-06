class Solution {
public:
    int numDecodings(string s) {
        if(s[0]=='0'){
            return 0;
        }
        vector<int> res(s.size()+1);
        res[s.size()]=1;
        for(int i=s.size()-1;i>=0;i--){
            res[i]=res[i+1];
            if(i+1<s.size() && (s[i]=='1' || (s[i]=='2' && s[i+1]<'7'))){
                res[i]+=res[i+2];
            }
        }
        return res[0];
    }
};
